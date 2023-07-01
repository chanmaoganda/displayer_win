#ifndef DISPLAYUI_H
#define DISPLAYUI_H

#include <iostream>

class DisplayUI
{
public:

    static void Menu_UI();

    static void Start_UI();

    static void Mode_UI();

    static void PlayMusic_UI();

    static void Exit_UI();

private:
    DisplayUI() = delete;

    ~DisplayUI() = delete; 
};

#endif