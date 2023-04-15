#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a = 0, b = 3,n=200;
    float h = (b-a)/n;
    float x = a, s = 0;

    for (int i = 0; i < n; i++)
    {
        s += h*((pow(x, 3)+1) + (pow(x+h,3)+1))/2;
        x += h;
    }

    if (x > b-h)
    {
        cout << s;
    }

    else
    {    
        for (int i = 1; i < n; i++)
        {
            s += h*((pow(x, 3)+1) + (pow(x+h,3)+1))/2;
            x += h;
        }    
    }    
    return 0;
}