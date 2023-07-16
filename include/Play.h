#ifndef __PLAY_H__
#define __PLAY_H__

#include ".\Displayer.h"
#include ".\songs\PopSongs.h" 
#include <iostream>
#include ".\References.h"

/// @brief this is the class to be the real main class(like in java)
/// @author Avania
class Play
{
public:
    /// @brief main function to start trial 
    void Start();

    /// @brief play a song that is stored in a paticular path
    /// @param song the song to be played
    /// @param seconds time to be played
    /// @return return a pointer to the parameter(Song * song)
    Song* PlayAudio(Song* song, size_t seconds);
    
    /// @brief switch the usr's input
    /// @param input input referred by UI
    /// @param flag tell whether the loop is to be break
    /// @param display displayer to play this exectable file
    /// @param mode mode to display songs, like Loop Sequence Random, etc...
    /// @return return flag to make second security
    bool SWITCH_INPUT(int input, bool& flag, std::unique_ptr<Displayer>& display, std::unique_ptr<Mode> &mode);

    void EventHandler();

    std::unique_ptr<Handler> handler;
public:
    Play();

    ~Play();

private:

    /// @brief private function separated from SWITCH_INPUT
    /// @param input variable to be written
    void PlayMusic(const char input);

    /// @brief private function separated from SWITCH_INPUT
    /// @param input variale to be written
    /// @param mode Mode to be changed and stored in variable mode
    void ChangeMode(const char input, std::unique_ptr<Mode>& mode);

};

#endif