#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float e = 0.0001, a = 1, b = 3;

    while (abs(b-a) > 2*e)
    {
         float x = (a + b) / 2;
        float fx = pow(x,3) + x - 3;
        float fa = pow(a,3) + a -3;
        if (fx*fa <= 0)
            b = x;
        else
            a = x;
        cout<<sqrt(x);
    }
    
    return 0;
}