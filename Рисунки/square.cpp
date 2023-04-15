#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char x, probel = ' ';
    int i = 0;
    cin >> x;
    cout << setw(5) << setfill(probel) << x;
    for (i = 0; i < 8; i++)
    {
        cout << x;
    }
    cout << x << endl;

    cout << setw(5) << setfill(probel) << x;
    for (i = 0; i < 8; i++)
    {
        cout << x;
    }
    cout << x << endl;

    cout << setw(5) << setfill(probel) << x;
    for (i = 0; i < 8; i++)
    {
        cout << x;
    }
    cout << x << endl;

    cout << setw(5) << setfill(probel) << x;
    for (i = 0; i < 8; i++)
    {
        cout << x;
    }
    cout << x << endl;

    cout << setw(5) << setfill(probel) << x;
    for (i = 0; i < 8; i++)
    {
        cout << x;
    }
    cout << x << endl;

    

    return 0;
}   