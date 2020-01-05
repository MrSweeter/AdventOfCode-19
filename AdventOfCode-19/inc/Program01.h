#pragma once

#include "AoCProgram.h"

namespace Vanga
{
	namespace Day01
	{
		class Program : public AoCProgram
		{
		private:
			int massToFuel(int mass);

		public:
			Program() : AoCProgram("01") {};
			void puzzle1();
			void puzzle2();
		};
	}
}