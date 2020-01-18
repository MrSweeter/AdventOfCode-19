#include "../../inc/Program04.h"

#include <filesystem>
#include <iostream>
#include <fstream>
#include <cmath>
#include <set>
#include <map>

using namespace std;
using namespace Vanga::Day04;

Program::Program()
{
	limitDown = 245182;
	limitUp = 790572;
}

void Program::puzzle1()
{
	vector<int> data;
	int count = 0;
	for (int i = limitDown; i <= limitUp; i++)
	{
		data = intToDigitArray(i);

		if (isValidOne(data))
		{
			count++;
		}
	}

	cout << "1. " + to_string(count) << endl;
};

void Program::puzzle2()
{
	vector<int> data;
	int count = 0;
	for (int i = limitDown; i <= limitUp; i++)
	{
		data = intToDigitArray(i);

		if (isValidTwo(data))
		{
			count++;
		}
	}

	cout << "2. " + to_string(count) << endl;
};

bool Program::isValidTwo(vector<int> data)
{
	int previous = -1;
	map<int, int> m = map<int, int>();

	for (int j = 0; j < data.size(); j++)
	{
		if (data[j] < previous) return false;
		previous = data[j];
		m[data[j]]++;
	}

	for (auto& v : m)
	{
		if (v.second == 2) return true;
	}
	return false;
}

bool Program::isValidOne(vector<int> data)
{
	int previous = -1;
	bool duo = false;
	for (int j = 0; j < data.size(); j++)
	{
		if (data[j] < previous) return false;
		if (previous == data[j]) duo = true;
		previous = data[j];
	}
	return duo;
}

vector<int> Program::intToDigitArray(int value)
{
	string str = to_string(value);
	vector<int> result = vector<int>();
	for (char c : str)
	{
		result.push_back(stoi(string(1, c)));
	}
	return result;
}