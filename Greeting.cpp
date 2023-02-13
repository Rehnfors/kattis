#include <iostream>
#include <string>


using namespace std;

int main(int argc, const char *argv[])
{
    string greeting;
    
    cin >> greeting;
    
    for(auto i = greeting.begin(); i != greeting.end(); i++)
    {
        if(*i == 'e')
        {
            greeting.insert((i+1), 'e');
            if(*(i+2) != 'e')
            {
                i++;
            }
        }
    }
    cout << greeting << endl;

}