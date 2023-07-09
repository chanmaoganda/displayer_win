#include <iostream>
#include "..\..\include\Play.h"


int main()
{
    std::unique_ptr<Play> play(new Play());
    play->Start();
    return 0;
}