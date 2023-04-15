#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   
    float i =0;
    float c = 2.1, r = 4* pow(10, -6), m = 7;
    float sumh = 0;
    float sumy = 0;
    
    while (i < 1.7)
    {
        float h = (10*r - i)/(pow(c,2) + exp(-m));
        float y = (h*m - pow(i, 2) + pow(0.1*c, 2));
        sumh += h;
        sumy += y;
        i += 0.1;
    }
   
    cout << sumh << endl;
    cout << sumy;
    
    return 0;
}