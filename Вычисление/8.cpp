#include <iostream>
#include <cmath>
using namespace std;

int i = 1, j = 1, n1 = 6, n2 = 5, sum1 = 0, sum2 = 0;
float c = 0.7, d;
float a[6] = {3, 1.2, -4, 6.2, 3, 0.4 };
int h = a[0];
float b[5] = {1.9, 1, -2.4, 4.2, 8};
int g = b[0], k = 0;

int main()
{
    for ( i = 1; i < n1; i++)
    {
        sum1 += i;
    }
    
    for (i = 1; i < n2; i++)
    {
        sum2 += i;
    }

    for (h = 0; h < 6; h++)
    {
        for (g = 0; g < 5; g++)
        {
            d  = sum1 * h - c* sum2*(pow(g-1, 2));
            k += d;
        }
    }
    
    cout << k; 
    return 0;
}    