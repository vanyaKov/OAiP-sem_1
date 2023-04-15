#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    char str[256] = "1100000011111110000111111000001111110001011111111111\0";
 
    for (int i = 0; str[i] != '\0'; i++)
    {
        int k = i;
        while (str[i] == str[i+1]) i++;
 
        if ((abs(k-i) % 2))
        {
            for (int t = k; t <= i; t++)
                printf("%c", str[t]);
 
            printf("\n");
        }
    }
 
 
    return 0;
}