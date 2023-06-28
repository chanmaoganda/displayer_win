#ifndef DISPLAYER_H
#define DISPLAYER_H

#include ".\songs\Song.h"
#include <memory>
#include<vector>

class Displayer
{
public:
    Displayer();

    Displayer(int);

    ~Displayer();
public:
    void ToNextSong();

    void ToLastSong();

    void ShowSongLists();

    void AddSongs(Song*);

    void ClearList();

    // void PlaySongs();

//public variables
public:
    //max volume is 10
    int volume;
    //max speed is 4x
    double speed;


//private varibles
private:
    const int MaxStackSize;
    
    std::unique_ptr<std::vector<Song*>> list;
};


#endif