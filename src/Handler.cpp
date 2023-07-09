#include "..\include\Handler.h"

Handler::Handler()
{

}

Handler::~Handler()
{

}


bool Handler::BuffHandler(std::string& buffer, std::istream& ISTREAM)
{
    std::getline(ISTREAM, buffer);
    try
    {
        if(buffer.length() != 1)
        {    
            throw "!!invalid input!!";
        }
    }
    catch(const char* err)
    {
        std::cerr << err << '\n';
    }
    return true;
}