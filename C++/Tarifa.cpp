#include <iostream>

int main(int argc, char const *argv[])
{
    int x, n, used;

    std::cin >> x >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;
        used += temp;
    }
    std::cout << x * (n + 1) - used;
    return 0;
}
