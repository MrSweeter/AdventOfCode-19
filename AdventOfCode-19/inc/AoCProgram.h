#pragma once

#include <string>
#include <vector>

namespace Vanga
{
    class AoCProgram
    {
    protected:
        std::vector<std::string> inputs;

    public:
        AoCProgram();
        AoCProgram(std::string dayIdentifier);
        virtual void puzzle1() = 0;
        virtual void puzzle2() = 0;
    };
}