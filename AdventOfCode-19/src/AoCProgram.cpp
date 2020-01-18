#include "../inc/AoCProgram.h"

#include <filesystem>
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
using namespace Vanga;

AoCProgram::AoCProgram()
{
	cout << "Forced constructor has been used" << endl;
}

AoCProgram::AoCProgram(string dayIdentifier) {

	ifstream file(filesystem::current_path().string() + "/src/day" + dayIdentifier + "/test.txt");

	AoCProgram::inputs.clear();
	for (string str; getline(file, str);)
	{
		AoCProgram::inputs.push_back(str);
	}
};