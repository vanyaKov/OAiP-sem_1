#include <iostream>
using namespace std;

int main()
{
    int a,b,r,s, sqw1, sqw2, p, q;
    cin >> a;
    cin >> b;
    cin >> r;
    cin >> s;
    cin >> p;
    cin >> q;

    sqw1 = a*b;

    sqw2= (r*s) + (p*q);

    if (sqw2 > sqw1)
    
        cout << "No";
    else
        cout << "Yes";
    
    

    return 0;
}