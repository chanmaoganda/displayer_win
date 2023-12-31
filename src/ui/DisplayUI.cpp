#include "..\..\include\ui\DisplayUI.h"

//print spaces enough to adapt the UI
std::ostream& DisplayUI::SpacesOutput() noexcept
{
    std::cout << "\t\t\t\t\t";
    return std::cout;
}

void DisplayUI::Menu_UI() noexcept
{
    std::cout << "\t\t\t\t\t============================================\n";
    std::cout << "\t\t\t\t\t|       welcome to my simple displayer     |\n";
    std::cout << "\t\t\t\t\t|             1. play music                |\n";
    std::cout << "\t\t\t\t\t|             2. change mode               |\n";
    std::cout << "\t\t\t\t\t|             3. clear mode                |\n";
    std::cout << "\t\t\t\t\t|             4. add music                 |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|             0. quit | exit               |\n";
    std::cout << "\t\t\t\t\t============================================\n";

}

void DisplayUI::Start_UI() noexcept
{
    std::cout << "\t\t\t\t\t============================================\n";
    std::cout << "\t\t\t\t\t|       welcome to my simple displayer     |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|               PRESS  ENTER               |\n";
    std::cout << "\t\t\t\t\t============================================\n";
}

void DisplayUI::Mode_UI() noexcept
{
    std::cout << "\t\t\t\t\t============================================\n";
    std::cout << "\t\t\t\t\t|             select your mode             |\n";
    std::cout << "\t\t\t\t\t|               1. Sequence                |\n";
    std::cout << "\t\t\t\t\t|               2. Random                  |\n";
    std::cout << "\t\t\t\t\t|               3. LOOP                    |\n";
    std::cout << "\t\t\t\t\t|               4. CLEAR                   |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t============================================\n";
    std::cout << "\t\t\t\t\t               TEXT YOUR CHOICE             \n";

}

void DisplayUI::PlayMusic_UI() noexcept
{
    std::cout << "\t\t\t\t\t============================================\n";
    std::cout << "\t\t\t\t\t|             select your song             |\n";
    std::cout << "\t\t\t\t\t|               1. jiang nan               |\n";
    std::cout << "\t\t\t\t\t|             2. bei dui bei yong bao      |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t============================================\n";
}

void DisplayUI::Exit_UI() noexcept
{
    std::cout << "\t\t\t\t\t============================================\n";
    std::cout << "\t\t\t\t\t| ------ |   | -----                       |\n";
    std::cout << "\t\t\t\t\t|    |   |   | |                           |\n";
    std::cout << "\t\t\t\t\t|    |   |---| |----                       |\n";
    std::cout << "\t\t\t\t\t|    |   |   | |                           |\n";
    std::cout << "\t\t\t\t\t|    |   |   | |----                       |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t============================================\n";
}

