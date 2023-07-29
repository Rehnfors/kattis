#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string name;
    std::string shn;

    std::cin >> name;
    shn.push_back(name[0]); // Just for the first name

    for(int i = 0; i < name.length(); i++)
    {
        if(name[i] == '-')
        {
            shn.push_back(name[i+1]);
        }
    }
    std::cout << shn;
    return 0;
}
