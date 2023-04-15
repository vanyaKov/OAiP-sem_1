#include <iostream>
using namespace std;

int main()
{
    int a, b, c=0;
    
    cin >> a;
    cin >> b;
    
    c = a;
    a = b;
    b = c;

    cout << a << endl;
    cout << b << endl;
    return 0;
}