#ifndef MODE_H
#define MODE_H

#include ".\mode_states\PlayState.h"

class Mode
{
public:
    void ChangeMode(state::PlayState);

    void ClearSettings();

    state::PlayState ModeState;
public:
    Mode();

    ~Mode();
};

#endif