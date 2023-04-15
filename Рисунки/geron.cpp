#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    float x, y, z;
    
    cin >> x;
    cin >> y;
    cin >> z;
    
    float p = (x + y + z)/ 2;
    float ger = sqrt(p * (p-x)*(p-y)*(p-z)); 
    
    cout << ger;
    return 0;
}