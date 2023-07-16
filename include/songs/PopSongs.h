#ifndef __POP_SONGS_H__
#define __POP_SONGS_H__

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