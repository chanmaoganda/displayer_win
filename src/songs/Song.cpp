#include "..\..\include\songs\Song.h"


Song::Song()
{
    file_name = new std::string("");
}

Song::Song(std::string* Name)
{
    file_name = std::move(Name);
}

Song::~Song()
{
    delete file_name;
    file_name = NULL;
}

std::string Song::getName()
{
    return *file_name;
}

std::string Song::reName(std::string* name)
{
    file_name = std::move(name);
    return *file_name;
}