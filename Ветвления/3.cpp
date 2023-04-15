#include <iostream>\
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d;
    int count = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    if (a % 2 == 0)
    {
        count += 1; 
    }
    
    if (b % 2 == 0)
    {
        count += 1;
    }
    
    if (c % 2 == 0)
    {
        count += 1;
    }
    
    if (d % 2 == 0)
    {
        count += 1;
    }
    
    cout << count;

    return 0;
}