#include <iostream>

using namespace std;

int main(int argc, const char *arv[])
{
    int x, y;
    
    cin >> x;
    cin >> y;
    
    if(x > 0 && y > 0)
    {
        cout << "1" << endl;
    }
    if(x < 0 && y > 0)
    {
        cout << "2" << endl;
    }
    if(x < 0 && y < 0)
    {
        cout << "3" << endl;
    }
    if(x > 0 && y < 0)
    {
        cout << "4" << endl;
    }
}
