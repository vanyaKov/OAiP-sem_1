#include <iostream>
using namespace std;

int x, sum = 0;
int main()
{
    cin >> x;
    while (x != 0)
    {
        cin >> x;
        if(x % 2 == 0)
            sum += x;
    }
    cout << sum;
    return 0;
}