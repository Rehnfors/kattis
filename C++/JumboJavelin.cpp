#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int amountOfRods = 0, sum = 0;

    cin >> amountOfRods;

    for (int i = 0; i < amountOfRods; i++)
    {
        int lengthOfRod = 0;

        cin >> lengthOfRod;

        sum += lengthOfRod;
    }

    cout << sum-amountOfRods+1 << endl;

    return 0;
}
