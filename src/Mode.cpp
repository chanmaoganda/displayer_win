#include "..\include\Mode.h"

void Mode::ChangeMode(state::PlayState changed_state)
{
    ModeState = changed_state;
}

void Mode::ClearSettings()
{
    ModeState = state::PlayState::SEQUENCE;
}

Mode::Mode()
{
    ModeState = state::PlayState::SEQUENCE;
}

Mode::~Mode()
{
    ModeState = state::PlayState::CLEAR;
}