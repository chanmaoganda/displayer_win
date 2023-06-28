#ifndef SONGS_H
#define SONGS_H

#include <string>
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
    std::string* file_name;
};


#endif