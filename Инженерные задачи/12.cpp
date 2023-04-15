#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a=0, b=3, n=200;
    float h = (b - a) / (2*n);
    float x = a+2*h;
    float s1=0, s2=0;
    int i = 1;

    for (i = 1; i < n; i++)
    {
        s2 += (pow(x,3)-1);
        x += h;
        s1 += (pow(x,3)-1);
        x += h;
    }

    
    if (i<n)
    {
            
        for (int i = 0; i < n; i++)
        {
            s2 += (pow(x,3)-1);
            x += h;
            s1 += (pow(x,3)-1);
            x += h;
        }
    }
    
    else
    {
        float bs = h/3*((pow(a,3)-1) + 4*(pow(a+h,3)-1) + 4*s1 + 2*s2 + pow(b,3)-1);
        cout << bs;
    }
    return 0;
}