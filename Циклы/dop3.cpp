#include <iostream>
#include <string>
using namespace std;

int i;
string s;
int main()
{
    cin >> s;
    for (i = 0; i < s.size(); i++)
        if (s[i] != '3' && s[i] != '6')
        cout << s[i];

    return 0;
}