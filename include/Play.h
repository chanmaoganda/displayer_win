#ifndef PLAY_H
#define PLAY_H

#include ".\Displayer.h"
#include ".\songs\PopSongs.h" 
#include <iostream>
#include ".\References.h"


class Play
{
public:
    void Start();

    Song* PlayAudio(Song*, size_t);

    //unique pointer must be refered
    bool SWITCH_INPUT(int, bool&, std::unique_ptr<Displayer>&, std::unique_ptr<Mode>&);

    void EventHandler();

    std::unique_ptr<Handler> handler;
public:
    Play();

    ~Play();

private:
    void PlayMusic(const char input);

    void ChangeMode(const char input, std::unique_ptr<Mode>& mode);

};

#endif