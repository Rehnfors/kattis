#include <iostream>
#include <string>


using namespace std;

int main(int argc, const char *argv[])
{
    string greeting;
    
    cin >> greeting;

    cout << "h";
    
    for(auto i = greeting.begin(); i != greeting.end(); i++)
    {
        if(*i == 'e')
        {
           cout << "ee";
        }
    }
    cout << "y";

}