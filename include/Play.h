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

    static Song* PlayAudio(Song*, size_t);

    //unique pointer must be refered
    static bool SWITCH_INPUT(int, bool&, std::unique_ptr<Displayer>&, std::unique_ptr<Mode>&);

    static void EventHandler();
private:
    Play() = delete;

    ~Play() = delete;

};

#endif