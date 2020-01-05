#include "../../inc/Program02.h"

#include <filesystem>
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
using namespace Vanga::Day02;

Program::Program()
{
	ifstream file(filesystem::current_path().string() + "/src/day" + "02" + "/input.txt");

	inputs.clear();
	for (string str; getline(file, str, ',');)
	{
		defaultInputs.push_back(str);
	}

	initMemory(12, 2);
}

void Program::initMemory(int noun, int verb)
{
	inputs.clear();
	inputs.insert(inputs.begin(), defaultInputs.begin(), defaultInputs.end());

	inputs[1] = to_string(noun);
	inputs[2] = to_string(verb);
}

void Program::puzzle1()
{
	cout << "1. " + to_string(processOpCode()) << endl;
};

void Program::puzzle2()
{
	int noun = 0, verb = 0, result = 0;
	for (noun = 0; noun < 100; noun++)
	{
		for (verb = 0; verb < 100; verb++)
		{
			initMemory(noun, verb);
			result = processOpCode();
			if (result == 19690720)
			{
				goto exit_loop;
			}
		}
	}
exit_loop:;
	cout << "2. " + to_string((100*noun) + verb) << endl;
};

int Program::processOpCode()
{
	for (unsigned int i = 0; i < inputs.size(); i++)
	{
		string num = inputs[i];
		switch (stoi(num))
		{
		case 1:
			setValue(i + 3, to_string(getValue(i + 1) + getValue(i + 2)));
			i += 3;
			break;
		case 2:
			setValue(i + 3, to_string(getValue(i + 1) * getValue(i + 2)));
			i += 3;
			break;
		case 99:
			goto exit_loop;
			break;
		default:
			break;
		}
	}
exit_loop:;
	string res = inputs[0];
	return stoi(res);
}

int Program::getValue(int index)
{
	return stoi(inputs[stoi(inputs[index])]);
}

void Program::setValue(int index, string value)
{
	inputs[stoi(inputs[index])] = value;
}
