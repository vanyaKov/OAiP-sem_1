#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int list[size];
    
    for (int i = 0; i < size; i++)
    {
        cin >> list[i];
    }
    
    float max = list[0];
    
    for (int i = 0; i < size; i++)
    {
        if (max < list[i])
        {
            max = list[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (i%2 == 1)
        {
            list[i] = max;
        }
        
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << list[i] << ' ';
    }
    
    return 0;
}