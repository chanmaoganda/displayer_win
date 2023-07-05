#ifndef SONGS_H
#define SONGS_H

#include <string>
#include <memory>
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