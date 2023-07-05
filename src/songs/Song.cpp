#include "..\..\include\songs\Song.h"

struct Song::Implement
{
    Implement();

    Implement(std::string* __File_Name);

    std::string* FileName;
};

Song::Implement::Implement()
{
    FileName = std::move(new std::string(""));
}

Song::Implement::Implement(std::string* __File_Name)
{
    FileName = std::move(__File_Name);
}

Song::Song()
{
    Implementer.reset(new Implement());
}

Song::Song(std::string* Name)
{
    Implementer->FileName = std::move(Name);
}

Song::~Song()
{
    delete Implementer->FileName;
    Implementer->FileName = nullptr;
}

std::string Song::getName()
{
    return *(Implementer->FileName);
}

std::string Song::reName(std::string* name)
{
    Implementer->FileName = std::move(name);
    return *(Implementer->FileName);
}