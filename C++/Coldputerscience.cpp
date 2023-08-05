#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    int days = 0;
    std::vector<int> temperatures;

    std::cin >> days;

    for(int i = 0; i < days; i++)
    {
        int temp;
        std::cin >> temp;
        temperatures.push_back(temp);
    }

    int count = 0;

    for(int i = 0; i < temperatures.size(); i++)
    {
        if(temperatures[i] < 0)
        {
            count++;
        }
    }

    std::cout << count;
    return 0;
}
