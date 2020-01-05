#pragma once

#include "AoCProgram.h"

namespace Vanga
{
	namespace Day02
	{
		class Program : public AoCProgram
		{
		private:
			std::vector<std::string> defaultInputs;
			void initMemory(int noun, int verb);
			int processOpCode();
			int getValue(int index);
			void setValue(int index, std::string value);
		public:
			Program();
			void puzzle1();
			void puzzle2();
		};
	}
}