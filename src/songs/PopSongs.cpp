#include "..\..\include\songs\PopSongs.h"

namespace SONGS
{

PopSongs::PopSongs()
{
    Song();
}

PopSongs::PopSongs(std::string* Name)
{
    Song();
    file_name = std::move(Name);
}

PopSongs::~PopSongs()
{
    
}

}