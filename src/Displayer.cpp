#include "..\include\Displayer.h"

Displayer::Displayer(int __MaxStackSize):MaxStackSize(__MaxStackSize)
{
    this->list.reset(new std::vector<Song*>(MaxStackSize));
    volume = 3;
    speed = 1;
}

Displayer::Displayer():MaxStackSize(100)
{
    this->list.reset(new std::vector<Song*>(MaxStackSize));
    volume = 3;
    speed = 1;
}

Displayer::~Displayer()
{
    for(auto song = list->begin(); song != list->end(); song++)
    {
        delete *song;
    }
}

void Displayer::AddSongs(Song* song)
{
    list->push_back(song);
}

void Displayer::ClearList()
{
    for(auto song = list->begin(); song != list->end(); song++)
    {
        //an iterator to a pointer, the pointer for Song 
        delete *song;
    }
    list.release();
    list.reset(new std::vector<Song*>(MaxStackSize));
}

void Displayer::ShowSongLists()
{
    for(auto song = list->cbegin(); song != list->cend(); song++)
    {
        // std::cout << song
    }
}


//TODO

void Displayer::ToLastSong()
{

}

void Displayer::ToNextSong()
{
    
}