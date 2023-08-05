#include <iostream>
#include <vector>
#include <string>

int main(int argc, char const *argv[])
{
    int counter = 0;
    std::string str;
    std::vector<int> cpr;

    std::cin >> str;

    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == '-')
        {
            str.erase(i, 1);
            i--; // Adjust the index after erasing a character
        }
    }

    for (char ch : str)
    {
        cpr.push_back(ch - '0');
    }

    int res = 4*cpr[0] + 3*cpr[1] + 2*cpr[2] + 7*cpr[3] + 6 *cpr[4] + 5*cpr[5] +
              4*cpr[6] + 3*cpr[7] + 2*cpr[8] + 1*cpr[9];
    
    if(res%11 == 0)
    {
        std::cout << "1";
    }
    else
    {
        std::cout << "0";
    }
    return 0;
}
