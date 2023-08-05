#include <iostream>

int main(int arg, char const* argv[])
{
    int a, b;

    std::cin >> a >> b;

    if(a > b)
    {
        std::cout << 1;
    }
    else if(a < b || a == b)
    {
        std::cout << 0;
    }
}