#include <iostream>
using namespace std;
int main()
{
    float c1, c2, i=0;
    cin >> c1;
    cin >> c2;    
            
    while(i <= 12)
    {
        c1 /= 2;
        c2 += c1;
        c2 /= 2;
        c1 += c2;
        i += 1;
    }
    
    cout << c1 << endl;
    cout << c2;
    return 0;
}