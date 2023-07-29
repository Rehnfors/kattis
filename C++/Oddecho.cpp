#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    int times;
    std::vector <std::string> echo;
    std::string temp;
    
    std::cin >> times;

    for(int i = 0; i < times; i++)
    {
        std::cin >> temp;
        echo.push_back(temp);
    }

    for(int i = 0; i < times; i++)
    {
        if(i%2 == 0)
        {
        std::cout << echo[i] << std::endl;
        }
    }

    return 0;
}
