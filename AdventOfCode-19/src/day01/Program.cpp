#include "../../inc/Program01.h"

#include <filesystem>
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
using namespace Vanga::Day01;

void Program::puzzle1()
{
	int result = 0;
	for (string input : Program::inputs)
	{
		result += massToFuel(stoi(input));
	}
	cout << "1: " + to_string(result) << endl;
};

void Program::puzzle2()
{
	int result = 0;
	int step = 0;
	for (string input : Program::inputs)
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

int Program::massToFuel(int mass)
{
	mass = round(mass / 3) - 2;
	return mass < 0 ? 0 : mass;
}
