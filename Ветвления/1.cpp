#include <iostream>
using namespace std;

int main()
{
    float m, n, b;
    int count = 0;
    cin >> m;
    cin >> n;
    cin >> b;

    if (m < 0)
    {
        count += 1; 
    }
    
    if (n < 0)
    {
        count += 1;
    }
    
    if (b < 0)
    {
        count += 1;
    }
    
    cout << count;

    return 0;
}