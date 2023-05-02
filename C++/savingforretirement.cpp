#include <iostream>

int main(int argc, char const *argv[])
{
    int b, br, bs, a, as;
    int bsaved, asaved;

    std::cin >> b >> br >> bs >> a >> as;

    while (asaved <= bsaved)
    {
        a++;
        b++;
        bs += bsaved;
        as += asaved;
    }

    std::cout << asaved;
    return 0;
}
