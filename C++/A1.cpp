#include <iostream>

int main(int argc, char const *argv[])
{
    const float a1 = 0.5, a2 = 0.25, a3 = 0.125, a4 = 0.0625,
     a5 = 0.03125, a6 = 0.015625, a7 = 0.0078125, a8 = 0.00390625, a9 = 0.001953125;

    const float t2 = 0.594603558, t3 = 0.420448208, t4 = 0.297301779,
     t5 = 0.210224104, t6 = 0.148650889, t7 = 0.105112052, 
     t8 = 0.074325445, t9 =  0.052556026;
    
    int aa1 = 0, aa2 = 0, aa3 = 0, aa4 = 0, aa5 = 0, aa6 = 0, aa7 = 0, aa8 = 0, aa9 = 0;

    int smallest = 0;
    float area = 0;
    float tape = 0;

    std::cin >> smallest;

    switch (smallest)
    {
    case 1:  
        std::cout << "Enter a number greater than 1." << std::endl;
        exit(1);
    case 2:
        std::cin >> aa2;
        area = aa2 * a2;
        tape = aa2 * t2;
        break;
    case 3:
        std::cin >> aa2 >> aa3;
        area = (aa2 * a2) + (aa3 * a3);
        tape = (aa2 * t2) + (aa3 * t3);
        break;
    case 4:
        std::cin >> aa2 >> aa3 >> aa4;
        area = (aa2 * a2) + (aa3 * a3) + (aa4* a4);
        tape = (aa2 * t2) + (aa3 * t3) + (aa4* t4);
        break;
    case 5:
        std::cin >> aa2 >> aa3 >> aa4
         >> aa5;
        area = (aa2 * a2) + (aa3 * a3) + (aa4* a4)
          + (aa5 * a5);

        tape = (aa2 * t2) + (aa3 * t3) + (aa4* t4)
          + (aa5 * t5);
        break;

    case 6:
        std::cin >> aa2 >> aa3 >> aa4
         >> aa5 >> aa6;
        area = (aa2 * a2) + (aa3 * a3) + (aa4* a4)
          + (aa5 * a5) + (aa6 * a6);

        tape = (aa2 * t2) + (aa3 * t3) + (aa4* t4)
          + (aa5 * t5) + (aa6 * t6);
        break;
    case 7:
        std::cin >> aa2 >> aa3 >> aa4 
        >> aa5 >> aa6 >> aa7;
        area = (aa2 * a2) + (aa3 * a3) + (aa4* a4)
         + (aa5 * a5) + (aa6 * a6) + (aa7 * a7);
        
        tape = (aa2 * t2) + (aa3 * t3) + (aa4* t4)
         + (aa5 * t5) + (aa6 * t6) + (aa7 * t7);
        break;
    case 8:
        std::cin >> aa2 >> aa3 >> aa4
         >> aa5 >> aa6 >> aa7 >> aa8;
        area = (aa2 * a2) + (aa3 * a3) + (aa4* a4)
         + (aa5 * a5) + (aa6 * a6) + (aa7 * a7) + (aa8 * a8);

        tape = (aa2 * t2) + (aa3 * t3) + (aa4* t4)
         + (aa5 * t5) + (aa6 * t6) + (aa7 * t7) + (aa8 * t8);
        break;

    case 9:
        std::cin >> aa2 >> aa3 >> aa4
         >> aa5 >> aa6 >> aa7 >> aa8 
         >> aa9;
          area = (aa2 * a2) + (aa3 * a3) + (aa4* a4)
         + (aa5 * a5) + (aa6 * a6) + (aa7 * a7) + (aa8 * a8) + (aa9 * a9);

        tape = (aa2 * t2) + (aa3 * t3) + (aa4* t4)
         + (aa5 * t5) + (aa6 * t6) + (aa7 * t7) + (aa8 * t8) + (aa9 * t9);
        break;    
    default:
        break;
    }

    if (area >= a1)
    {
        std::cout << tape << std::endl;
    }
    else
    {
        std::cout << "Impossible." << std::endl;
    }
    

    return 0;
}
