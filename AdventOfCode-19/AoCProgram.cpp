#include "AoCProgram.h"

#include <filesystem>
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
using namespace Vanga;

string path = filesystem::current_path().string() + "/input.txt";

AoCProgram::AoCProgram() {
	init(path);
};

void AoCProgram::init(string filePath)
{
	ifstream file(filePath);

	AoCProgram::inputs.clear();
	for (string str;  getline(file, str);)
	{
		AoCProgram::inputs.push_back(str);
	}
}

void AoCProgram::puzzle1()
{
	int result = 0;
	for (string input : AoCProgram::inputs)
	{
		result += massToFuel(stoi(input));
	}
	cout << "1: " + to_string(result) << endl;
};

void AoCProgram::puzzle2()
{
	int result = 0;
	int step = 0;
	for (string input : AoCProgram::inputs)
	{
		step = stoi(input);
		do
		{
			step = massToFuel(step);
			result += step;
		} while (step > 0);
	}
	cout << "2: " + to_string(result) << endl;
};

int AoCProgram::massToFuel(int mass)
{
	mass = round(mass / 3) - 2;
	return mass < 0 ? 0 : mass;
}
