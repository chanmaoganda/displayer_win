#ifndef __HANDLER_H__
#define __HANDLER_H__

#include <string>
#include <iostream>

/// @brief handle the input buffer overflow
/// @author Avania
class Handler
{
public:
    Handler();

    ~Handler();
public:
    /// @brief 
    /// @param buffer input things stored in buffer
    /// @param ISTREAM std::cin usually
    /// @return return true if buffer size is 1, which means valid input to fit UI
    bool BuffHandler(std::string& buffer, std::istream& ISTREAM);
private:


};

#endif