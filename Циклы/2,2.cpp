#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float n = 9, y = 5, j = 0, t = -7.4, s, w;
    
    float sums = 0;
    float sumw = 0;
    
    while (j <= 2)
    {
        w = 0.6*j + exp(t*j) *pow(4*y/n, 2);
        s = sqrt(w-0.1*t)/(2+pow(n, 2));
        sums += s;
        sumw += w;
        j += 0.1;
    }
    
    cout << sumw << endl;
    cout << sums;
    return 0;
}