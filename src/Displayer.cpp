#include "..\include\Displayer.h"

struct Displayer::Implement
{
    Implement(int MAX_SIZE);

    const int MaxStackSize;
    
    std::unique_ptr<std::vector<Song*>> list;
};

Displayer::Implement::Implement(int MAX_SIZE):MaxStackSize(MAX_SIZE) { }

Displayer::Displayer(int __MaxStackSize)
{
    Implementer.reset(new Implement(__MaxStackSize));
    Implementer->list.reset(new std::vector<Song*>(__MaxStackSize));
    volume = 3;
    speed = 1;
}

Displayer::Displayer()
{
    int DefaultStackSize = 100;
    Implementer.reset(new Implement(DefaultStackSize));
    Implementer->list.reset(new std::vector<Song*>(Implementer->MaxStackSize));
    volume = 3;
    speed = 1;
}

Displayer::~Displayer()
{
    for(auto song = Implementer->list->begin(); song != Implementer->list->end(); song++)
    {
        delete *song;
    }
}

void Displayer::AddSongs(Song* song)
{
    Implementer->list->push_back(song);
}

void Displayer::ClearList()
{
    for(auto song = Implementer->list->begin(); song != Implementer->list->end(); song++)
    {
        //an iterator to a pointer, the pointer for Song 
        delete *song;
        *song = nullptr;
    }
    Implementer->list.release();
    Implementer->list.reset(new std::vector<Song*>(Implementer->MaxStackSize));
}

void Displayer::ShowSongLists()
{
    for(auto song = Implementer->list->cbegin(); song != Implementer->list->cend(); song++)
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