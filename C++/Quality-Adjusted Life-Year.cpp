#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int periods;
    float multiple, years, sum;
    
    cin >> periods;
    
    for(int i = 0; i < periods; i++)
    {
        cin >> multiple;
        cin >> years;
        
        sum += multiple * years;
    }
    cout << sum << endl;
}
