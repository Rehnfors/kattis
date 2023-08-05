#include <iostream>
#include <string>
#include <vector>


int main(int argc, char const *argv[])
{
    int ballpos = 1;
    std::string move;

    getline(std::cin, move);

    for(char ch : move)
    {
        switch(ch)
        {
            case 'A':
                if(ballpos == 1)
                {
                    ballpos = 2;
                    break;
                }
                else if(ballpos == 2)
                {
                    ballpos = 1;
                    break;
                }
                else
                {
                    break;
                }
            case 'B':
                if(ballpos == 2)
                {
                    ballpos = 3;
                    break;
                }
                else if(ballpos == 3)
                {
                    ballpos = 2;
                    break;
                }
                else
                {
                    break;
                }
            case 'C':
                if (ballpos == 3)
                {
                    ballpos = 1;
                    break;
                }
                else if(ballpos == 1)
                {
                    ballpos = 3;
                    break;
                }
                else
                {
                    break;
                }
            
        }
    }
    std::cout << ballpos;
    return 0;
}
