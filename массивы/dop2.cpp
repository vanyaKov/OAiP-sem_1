#include <iostream>
using namespace std;

int main()
{
    int size, number=0;
    cin >> size;
    int list[7];
    
    for (int i = 0; i < 7; i++)
    {
        cin >> list[i];
    }

    int max = list[0];
    for (int i = 0; i < size-1; i++)
    {
        if (max > list[i])
        {
            max = list[i];
        }
        
    }
    
    cout << max;
    
    return 0;
}