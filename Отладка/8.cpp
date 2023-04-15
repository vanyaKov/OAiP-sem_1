#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

float a = 1.2, k = 3;
float x[4] = {0.2, 1, -3, -6.1};
int i = x[0];
float d;

int main()
{
    for (i = 0; i < 4; i++)
    {
        d = exp(-1 * x[i]) + (x[i]-a)/log(x[i]);
        if (d >= k * sqrt(a))
            cout << 6*d*x[i] << endl;

        else
            cout<< sin(a/x[i]) << endl;
    }
    return 0;
}