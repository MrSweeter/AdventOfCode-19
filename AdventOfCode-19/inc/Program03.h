#pragma once

#include "AoCProgram.h"

namespace Vanga
{
	namespace Day03
	{
		class Program : public AoCProgram
		{
		private:
			std::vector<std::string> wireOne;
			std::vector<std::string> wireTwo;
			std::vector<int> wiredPointsOne;
			std::vector<int> wiredPointsTwo;
			void parseWire(std::string input, std::vector<std::string>& wire);
			void loadWire(std::vector<std::string> input, std::vector<int>& points);
			void split(std::string str, std::vector<std::string>& cont, char delim = ',');
		public:
			Program() : AoCProgram("03") {};
			void puzzle1();
			void puzzle2();
		};
	}
}