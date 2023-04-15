#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int r, d1, d2;
    cin >> r;
    cin >> d1;
    cin >> d2;

    float sqw1 = d1*d2/2;
    float sqw2 = 2*3.14*r;

    if (sqw1 > sqw2 && 2*r < d1 && 2*r < d2)
    
        cout << "Пройдет";
    

    else 
        cout<< "Не пройдет";
    
    
    return 0;
}