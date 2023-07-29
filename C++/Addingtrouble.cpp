#include <iostream>

int main(int argc, char const *argv[])
{
    int a, b, c;

    std::cin >> a >> b >> c;

    if(a+b == c)
    {
        std::cout << "correct!" << std::endl; 
    }
    else if(a+b != c)
    {
        std::cout << "wrong!" << std::endl;
    }
    
    return 0;
}
