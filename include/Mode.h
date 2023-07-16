#ifndef __MODE_H__
#define __MODE_H__

#include ".\mode_states\PlayState.h"
#include <iostream>
/// @brief this is to define which pattern to deal while playing music
/// @author Avania
class Mode
{
public:
    /// @brief change mod state
    /// @param change_state this parameter is to be changed in the function
    void ChangeMode(state::PlayState change_state);

    /// @brief change mode to Clear usually
    void ClearSettings();

    state::PlayState ModeState;
public:
    Mode();

    Mode(state::PlayState);

    ~Mode();
};

#endif