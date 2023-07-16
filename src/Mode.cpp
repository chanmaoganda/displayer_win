#include "..\include\Mode.h"

void Mode::ChangeMode(state::PlayState changed_state)
{
    ModeState = changed_state;
}

void Mode::ClearSettings()
{
    std::string IsToBeClear;
    std::cout << "you really gonna clear settings?(y/n)" << "\n";
    std::cin >> IsToBeClear;
    try
    {
        if(IsToBeClear.length() != 1)
        {    
            throw 100;
        }
    }
    catch(const char* err)
    {
        std::cerr << err << '\n';
    }
    catch(int num_err)
    {
        std::cerr << num_err << '\n';
    }

    if(IsToBeClear[0] - '0' == 'y' || IsToBeClear[0] - '0' == 'Y')
        ModeState = state::PlayState::SEQUENCE;
}

Mode::Mode()
{
    ModeState = state::PlayState::SEQUENCE;
}

Mode::Mode(state::PlayState status)
{
    ModeState = status;
}

Mode::~Mode()
{
    ModeState = state::PlayState::CLEAR;
}