#include <iostream>
#include <vector>
#include <string>

int main(int argc, char const* argv[])
{
    std::string text;
    std::string alive = ":)";
    std::string undead = ":(";

    std::getline(std::cin, text);
    bool isAlive = text.find(alive) != std::string::npos;
    bool isUndead = text.find(undead) != std::string::npos;

    if(isAlive && isUndead)
    {
        std::cout << "double agent";
    }
    else if(isAlive)
    {
        std::cout << "alive";
    }
    else if(isUndead)
    {
        std::cout << "undead";
    }
    else if(!isAlive && !isUndead)
    {
        std::cout << "machine";
    }
}