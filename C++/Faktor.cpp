#include <iostream>

int main(int argc, char const *argv[])
{
    int x, y, answer;

    std::cin >> x >> y;
    answer = x * (y-1);

    std::cout << answer+1;
    return 0;
}
