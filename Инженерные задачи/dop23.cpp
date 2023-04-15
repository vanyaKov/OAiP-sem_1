#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float e = 0.0001, a = 3, b = 6, result;
    while (abs(b-a) > 2*e)
    {
        float x = (a + b) / 2;
        float fx = pow(x,3) + 3*x - 1;
        float fa = pow(a,3) + 3*a -1;
        if (fx*fa <= 0)
            b = x;
        else
            a = x;
        
        result = x;
    }
    
    cout << result;
    return 0;
}