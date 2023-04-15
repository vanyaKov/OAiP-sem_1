#include <iostream>
#include <cmath>
using namespace std;

int natur;
int i = 0;

int main()
{
    cin >> natur;
    for (i = 0; i <= natur; i++)
    {
        if (natur % i == 0)
        {
            cout << i << endl;   
        }
    }
    return 0;
}