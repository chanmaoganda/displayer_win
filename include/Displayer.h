#ifndef __DISPLAYER_H__
#define __DISPLAYER_H__

#include ".\songs\Song.h"
#include <memory>
#include<vector>

/// @brief main class to play music
/// @author Avania
class Displayer
{
public:
    /// constructer
    Displayer();

    /// @brief constructer
    /// @param int 
    /// @author Avania  
    Displayer(int __MaxStackSize);

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
    // const int MaxStackSize;
    // std::unique_ptr<std::vector<Song*>> list;
    struct Implement;

    /// @brief pointer to elments in the private struct
    std::unique_ptr<Implement> Implementer;
    
};


#endif