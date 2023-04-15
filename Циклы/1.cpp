#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float c = 2.1, r = 4* pow(10, -6), m = 7;
    float j[3] = {4.2, 0.3, 1.7};
    int i = j[1];
    float sumh = 0;
    float sumy = 0;

    for ( i = 1; i <= 3; i++)
    {
        float h = (10*r - i)/(pow(c,2) + exp(-m));
        float y = (h*m - pow(i, 2) + pow(0.1*c, 2));
        sumh += h;
        sumy += y;
    }
    cout << sumh<< endl;
    cout << sumy;

    return 0;
}