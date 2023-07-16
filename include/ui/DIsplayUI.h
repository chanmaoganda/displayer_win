#ifndef __DISPLAYUI_H__
#define __DISPLAYUI_H__

#include <iostream>

/// @brief UI stored here, Menu / Start / Mode / Play_Music / Exit
/// @author Avania 
class DisplayUI
{
public:

    static void Menu_UI() noexcept;

    static void Start_UI() noexcept;

    static void Mode_UI() noexcept;

    static void PlayMusic_UI() noexcept;

    static void Exit_UI() noexcept;

    static std::ostream& SpacesOutput() noexcept;

private:
    DisplayUI() = delete;

    ~DisplayUI() = delete; 
};


#endif