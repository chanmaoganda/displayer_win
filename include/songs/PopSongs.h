#ifndef POP_SONGS_H
#define POP_SONGS_H

#include ".\Song.h"

namespace DerivedSongs
{


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