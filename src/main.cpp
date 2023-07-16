#include <iostream>
#include "..\..\include\Play.h"
#include "..\test\include\TestPlay.h"

int F_adder(int num1, int num2)
{
     return num1 + num2;
}

int main()
{
    // std::unique_ptr<Play> play(new Play());
    // play->Start();

    auto add = [](int num1, int num2) -> int {return num1 + num2;};
    std::cout << TEST(add(1,2), 3) << "\n";
    std::cout << ASSERT_TRUE(add(1,2), 3) << "\n";
    return 0;
}