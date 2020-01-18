#pragma once

#include "AoCProgram.h"

namespace Vanga
{
	namespace Day04
	{
		class Program : public AoCProgram
		{
		private:
			int limitDown;
			int limitUp;
		public:
			Program();
			bool isValidOne(std::vector<int> array);
			bool isValidTwo(std::vector<int> array);
			std::vector<int> intToDigitArray(int value);
			void puzzle1();
			void puzzle2();
		};
	}
}