#ifndef POP_SONGS_H
#define POP_SONGS_H

#include ".\Song.h"
/// @brief a namespace to notice author derived classes that were written
/// @author Avania
namespace DerivedSongs
{

/// @brief derived class from Song ( public )
/// @author Avania
class PopSongs : public Song
{
public:
    PopSongs();

    PopSongs(std::string*);

    ~PopSongs();

private:

};


}
#endif