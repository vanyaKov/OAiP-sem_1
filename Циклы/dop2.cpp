#include <iostream>
using namespace std;

int main()
{
    int x, z;
    float y;
    cin >> z;
    cin >> y;
    y /= 100;
    int sum = 0;
    cin >> x;

    while ( x != 0)
    {
        cin >> x;
        sum += x - x*y;
    }
    cout << y << endl;
    cout << sum*z << endl;
    return 0;
}