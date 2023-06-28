#ifndef PLAY_H
#define PLAY_H

#include ".\Displayer.h"
#include ".\songs\PopSongs.h" 
#include <iostream>
#include ".\References.h"


class Play
{
public:
    static void Start();

    static Song* PlayAudio(Song*);

    static Song* PlayAudio(Song*, size_t);

    static void Menu_UI();

    static void Start_UI();

    
private:
    Play() = delete;

    ~Play() = delete;

};

#endif