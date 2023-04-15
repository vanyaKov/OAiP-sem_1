#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    float days = 0;

    while (x < y)
    {
        x += x*0.03;
        days +=1;
    }

    cout << days;
    return 0;
}