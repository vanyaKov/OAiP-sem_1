#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    int count = 0;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a == b)
    {
        count += 1; 
    }
    
    if (a == c)
    {
        count += 1;
    }
    
    if (b == c )
    {
        count += 1;
    }
    
    cout << count;

    return 0;
}