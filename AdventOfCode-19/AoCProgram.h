#pragma once

#include <string>
#include <list>

namespace Vanga
{
    class AoCProgram
    {
    private:
        std::list<std::string> inputs;

    public:
        AoCProgram();
        void init(std::string path);
        void puzzle1();
        void puzzle2();
        int massToFuel(int mass);
    };
}