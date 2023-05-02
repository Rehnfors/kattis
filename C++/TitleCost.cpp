#include <iostream>
#include <string>
#include <iomanip>

int main(int argc, char const *argv[])
{
    std::string name;
    double cap;

    std::getline(std::cin, name);
    std::cin >> cap;

    if (name.length() > 30)
    {
        std::cout << "30" << std::endl;
    }
    else if (cap < name.length())
    {
        std::cout << std::setprecision(15) << cap << std::endl;
    }
    else
    {
        std::cout << name.length() << std::endl;
    }

    return 0;
}
