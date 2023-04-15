#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    float s = 7.4, m = 10, f = 7.4 * pow(10, -4), c[3] = {4, 0.5, 8}, h, y;
    float sumh = 0, sumy = 0;
    int x = c[1];

    for (x = 0; x < 3; x++)
    {
        h = (s + x)/ log(f)/ exp(-s);
        y = (y - f)/ log(y);

        sumh += h;
        sumy += y; 
    }
    
    cout << sumh << endl;
    cout << sumy;

    return 0;
}