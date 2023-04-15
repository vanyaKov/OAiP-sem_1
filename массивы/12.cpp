#include <iostream>
using namespace std;

int main()
{
    int size, number = 0;
    cin >> size;
    int list[size];
    
    for (int i = 0; i < size; i++)
    {
        cin >> list[i];
    }
    
    for (int i = 0; i < size-1; i++)
    {
        if (list[i] > list[i+1])
        {
            number +=1;
        }
    }
    
    cout << number;
    return 0;
}