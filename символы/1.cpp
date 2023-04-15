#include <iostream>

char x[50],y[30];
int i, j;
using namespace std;
int main() {
	cin >> x;
	cin >> y;
	
	for (i = 0; i < strlen(x); i++)
		for (j = 0; j < strlen(y); j++)
			if (x[i] == y[j]) 
				cout << x[i];
			
	return 0;
}