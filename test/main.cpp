#include<iostream>
#include<string>


int main()
{
    std::string str;
    std::getline(std::cin, str);

    try{
        if(str.length() == 1)
            throw "no!!!";
    }
    
    catch(const char* err){
        std::cerr << err << '\n';
    }


    return 0;
}