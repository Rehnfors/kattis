#include <iostream>

int main(int argc, char const *argv[])
{
    int number = 0;
    std::cin >> number;

    if((number/10000) == 555)
    {
        std::cout << "1" << std::endl;
    }
    else
    {
    std::cout << "0" << std::endl;
    }
    
    return 0;
}
