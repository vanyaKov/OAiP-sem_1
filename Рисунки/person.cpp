#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char x;
    char probel = ' ';
    int i = 0;
    cin >> x;
    
    cout << setw(3) << setfill(probel) <<  x << probel;
    cout << x << endl;

    cout << setfill(probel) << probel << x << setfill(probel) << probel;
    cout << x << setfill(probel) << probel;
    cout << x << endl;
    
    cout << setw(3) << setfill(probel) <<  x << setfill(probel) << probel;
    cout << x << endl;

    cout << setw(4) << setfill(probel) <<  x << endl; // 1

    cout << setfill(probel) << probel << x ; // 2
    cout << setfill(probel) << probel <<  x;
    cout << setfill(probel) << probel <<  x << endl;
 
    cout << setw(4) << setfill(probel) <<  x << endl; // 3

    for (i = 0; i < 3; i++)
    {
        cout << setfill(probel) << probel << setfill(probel) << probel <<  x; // 4
        cout << setfill(probel) << probel <<  x << endl;    
    }
    return 0;
}