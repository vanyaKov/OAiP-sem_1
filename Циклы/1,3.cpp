#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float i =0;
    float c = 2.1, r = 4* pow(10, -6), m = 7;
    float sumh = 0;
    float sumy = 0;
    float j[4] = {9, 1.8, 15, -3};
    int x = j[1];
    
    while (i <= 2)
    {
        
        for ( x = 1; x < 4; x++)
        {
            float h = (10*r - i)/(pow(c,2) + exp(-m));
            float y = (h*m - pow(i, 2) + pow(0.1*c, 2));
            sumh += h;
            sumy += y;
        }
        
        i += 0.5;   
    }

    cout << sumh << endl;
    cout << sumy;
    
     

    return 0;
}
