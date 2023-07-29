#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string str, str2;
    int it = 0;

    std::cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'a' || str[i] == 'A')
        {
            for(int j = i; j < str.length(); j++)
            {
                str2.push_back(str[j]);
            }
            break;
        }
    }

    std::cout << str2 << std::endl;
    return 0;
}
