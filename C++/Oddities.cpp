#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int runs, x;
    
    cin >> runs;
    
    for(int i = 0; i < runs; i++)
    {
        cin >> x;
        
        if(x%2 == 0)
        {
            cout << x << " is even" << endl;
        }
        else
        {
            cout << x << " is odd" << endl;
        }
    }
}
