#include <iostream>
using namespace std;

int otric;
int main()
{
    int size;
    cin >> size;
    int array1[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array1[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        if (array1[i] < 0)
        {
            
            otric = i;
        }
        
    }
    cout << otric << " Индекс последнего  отрицательного элемента";
    return 0;
}