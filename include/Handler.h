#ifndef HANDLER_H
#define HANDLER_H

#include <string>
#include <iostream>


class Handler
{
public:
    Handler();

    ~Handler();
public:

    bool BuffHandler(std::string& buffer, std::istream& ISTREAM);
private:


};

#endif