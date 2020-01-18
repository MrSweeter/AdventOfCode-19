#include "../../inc/Program03.h"

#include <filesystem>
#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>

using namespace std;
using namespace Vanga::Day03;

void Program::puzzle1()
{
    parseWire(inputs.at(0), wireOne);
    parseWire(inputs.at(1), wireTwo);

    loadWire(wireOne, wiredPointsOne);
    loadWire(wireTwo, wiredPointsTwo);

    vector<int> v3;

    // TODO INTERSECT OF wiredPointsOne and wiredPointsTwo

	cout << "1. " << endl;
};

void Program::puzzle2()
{
	cout << "2. " << endl;
};

void Program::parseWire(string wireData, vector<string>& wire)
 {
    split(wireData, wire);
}

void Program::loadWire(vector<string> wire, vector<int>& points)
{
    int positionX = 0, positionY = 0;

    vector<char> letters;
    vector<int> counts;

    for (string str : wire)
    {
        letters.push_back(str[0]);
        counts.push_back(stoi(str.substr(1, str.size() - 1)));
    }

    int currentCount = 0;

    for (unsigned int i = 0; i < letters.size(); i++)
    {
        currentCount = counts[i];
        for (int j = 0; j <= currentCount; j++)
        {
            // TODO ADD POINT
            //points.push_back();

            switch (letters[i])
            {
                case 'U':
                    positionY++;
                    break;
                case 'D':
                    positionY--;
                    break;
                case 'R':
                    positionX++;
                    break;
                case 'L':
                    positionX--;
                    break;
                default:
                    break;
            }
        }
    }
}



void Program::split(std::string str, vector<string>& cont, char delim)
{
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delim)) {
        cont.push_back(token);
    }
}
