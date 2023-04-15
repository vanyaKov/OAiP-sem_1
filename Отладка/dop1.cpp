#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i = 100;
    for (i = 100; i < 999; i++)
    {
        int num1 = i/100;
        int num2 = i/10 - num1*10;
        int num3 = i - 10 *(i/10);
        if (sqrt(i)-(int)sqrt(i)<0.001)
        {
            if (num1 < num2 && num1 < num3)
            {
                if (num2 < num3)
                {
                    cout << i << endl;
                }
            }
        }
    }    
    return 0;
}