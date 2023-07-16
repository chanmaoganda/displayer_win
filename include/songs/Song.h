#ifndef __SONGS_H__
#define __SONGS_H__

#include <string>
#include <memory>

/// @brief base class for different type of songs
/// @author Avania
class Song
{
public:
    Song();

    Song(std::string*);

    virtual ~Song();
public:
    std::string getName();

    std::string reName(std::string*);

protected:
    // std::string* file_name;
    struct Implement;

    std::unique_ptr<Implement> Implementer;
};


#endif