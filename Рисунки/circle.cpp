#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char x, probel= ' ';
    cin >> x;
    cout << setw(10) << setfill(probel) << x << endl;//1

    cout << setw(9.5) << setfill(probel) << x;//2
    cout << x << endl;
    
    cout << setw(8.5) << setfill(probel) << x; //3
    cout << x;
    cout << x << endl;
    
    cout << setw(7.5) << setfill(probel) << x;//4
    cout << x;
    cout << x;
    cout << x << endl;
    
    cout << setw(8.5) << setfill(probel) << x; //5
    cout << x;
    cout << x << endl;

    cout << setw(9.5) << setfill(probel) << x;//6
    cout << x << endl;

    cout << setw(10) << setfill(probel) << x << endl;//7
    return 0;
}