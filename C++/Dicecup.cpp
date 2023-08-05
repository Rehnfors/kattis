#include <iostream>
#include <vector>
#include <map>

int main(int argc, char const *argv[])
{
    int n, m;
    std::vector<int> max;
    std::vector<int> additions;
    std::map<int, int> most;

    std::cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            additions.push_back(i + j);
        }
    }

    std::map<int, int> counters;
    for (auto i : additions)
    {
        ++counters[i];
    }


    int maxOccurrence = 0;
    std::vector<int> mostOccurringElements;

    for (const auto& entry : counters) {
        if (entry.second > maxOccurrence) {
            maxOccurrence = entry.second;
            mostOccurringElements.clear();
            mostOccurringElements.push_back(entry.first);
        } else if (entry.second == maxOccurrence) {
            mostOccurringElements.push_back(entry.first);
        }
    }

    for (int element : mostOccurringElements) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    return 0;
}
