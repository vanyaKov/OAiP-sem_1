#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    int sum = 0;

    if (a%5==0)
    
        sum += a;
    
    if (b%5==0)
    
        sum += b;
    
    if (c%5==0)
    
        sum += c;
    
    if (a%5!=0 and b%5!=0 and c%5!=0)
    
      cout<< "ERROR";
    
    else
        cout << sum;
    return 0;
}