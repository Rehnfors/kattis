#include "vectorfunctions.h"
#include <iostream>
#include <algorithm>
#include <vector>

// Reverse a vector.
// Note that it is sent as a reference, so you should
// reverse the same vector that was sent in.

void backwards(std::vector<int> &vec)
{

    std::reverse(vec.begin(), vec.end());
}

// Return every other element of the vector, starting with the first.
// You should return a new vector with the answer.
// You are not allowed to modify the vector, even though it is
// sent as a reference. Therefore, the parameter is declared

std::vector<int> everyOther(const std::vector<int> &vec)
{
    std::vector<int> repVec;

    for (int i = 0; i < vec.size(); i++)
    {
        repVec.push_back(vec[i]);
        i++;
    }


    return repVec;
}

// Return the smallest value of a vector.
int smallest(const std::vector<int> &vec)
{
    int min = 10000;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] <= min)
        {
            min = vec[i];
        }
    }
    return min;
}

// Return the sum of the elements in the vector.

int sum(const std::vector<int> &vec)
{
    int sum = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
    }

    return sum;
}

// Return the number of odd integers, that are also on an
// odd index (with the first index being 0).

int veryOdd(const std::vector<int> &suchVector)
{
    int num = 0;

    for (int i = 0; i < suchVector.size(); i++)
    {
        if (i % 2 != 0 && suchVector[i] % 2 != 0)
        {
            num++;
        }
    }
    return num;
}
