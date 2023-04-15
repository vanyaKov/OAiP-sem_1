#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int size, number = 0, i = 0, j = 0;
    cin >> size;
    float array1[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array1[i];
    }
    
    float max = array1[0];
    float min = array1[0];

    int index1, index2;
    
    for(int i = 0; i<size; i++)
	{
		if(max < array1[i])
        {
            index1 = i;
        }
        
        if(min > array1[i])
        { 
            index2 = i;
        }
	}
    
    if (index1 > index2)
    
    {
        for (i = index2; i < index1-1; i++)
        {
            number++;
        }
    }

    if (index2 > index1)
    {
        for (j = index1; j < index2-1; j++ )
        {
            number++;
        }
        
    }
    
    cout << number << endl;
    return 0;
}