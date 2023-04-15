#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int num1 = (a/1000);
    int num2 = (a/100) - num1*10;
    int num3 = (a/10) - num1*100 - num2 *10;
    int num4 = a - num1*1000 - num2 *100 - num3 *10;

    int f[4] = {num1, num2, num3, num4};

int flag = 0;
for (int i = 0; i <= 3; i++)
    for (int j = 0; j <= 3; j++)
     {
        if (i == j)
            j++;

        if (f[i] == f[j])
        {
            flag = 1;
        }
     }

if (flag == 0)
cout <<"Not the same" <<endl;
else
cout <<"Same" <<endl;
 return 0;   
}