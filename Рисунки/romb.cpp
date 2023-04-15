#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char x, probel= ' ';
    cin >> x;
    int i = 0;

    cout << setw(10) << setfill(probel) << x << endl;//1

    cout << setw(9.5) << setfill(probel) << x;//2
    cout << x;
    cout << x << endl;
     
    
    cout << setw(8.5) << setfill(probel) << x; //3
    for (i = 0; i < 3; i++)
    {
       cout << x;
    }
    
    cout << x << endl;
    
    cout << setw(7.5) << setfill(probel) << x;//4
    for(i = 0; i < 5; i++)
    {
        cout << x;
    }
    
    cout << x << endl;
    
    cout << setw(8.5) << setfill(probel) << x; //5
    for (i = 0; i < 3; i++)
    {
        cout << x;
    }
    
    cout << x << endl;

    cout << setw(9.5) << setfill(probel) << x;//6
    cout << x;
    cout << x << endl;

    cout << setw(10) << setfill(probel) << x << endl;//7
    return 0;
}