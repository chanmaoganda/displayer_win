#ifndef MODE_H
#define MODE_H

#include ".\mode_states\PlayState.h"
#include <iostream>
class Mode
{
public:
    void ChangeMode(state::PlayState change_state);

    void ClearSettings();

    state::PlayState ModeState;
public:
    Mode();

    Mode(state::PlayState);

    ~Mode();
};

#endif