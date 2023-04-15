#include <iostream>
using namespace std;

int number=0, result;
int main()
{
    int size, count = 0;
    cin >> size;
    int list[size];
    
    for (int i = 0; i < size; i++)
    {
        cin >> list[i];
    }

    for (int i = 0; i < size-1; i++)
    {
        for (int j = 1; j <size-1; j++)
        {
            if (list[i] != list[j])
            {
                count += 1;
            }
        }
    }

    cout << count;

    return 0;
}