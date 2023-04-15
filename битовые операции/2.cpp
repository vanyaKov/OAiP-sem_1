#include <iostream>
using namespace std;
int main()
{ 
	setlocale(LC_CTYPE, "Russian");
	unsigned int a, b,c = 0;
	int i, m, n;	
	
	const unsigned int  mask = 1 << 31;
	
	string resulta, resultb;
	
	cout << "Введите целое число ";
	cin >> a >> b;
	
	
	for (i = 1; i <= 32; i++)
	{ 
		if (mask & a) 
			resulta += '1';
		else
			resulta += '0';
		a <<= 1;
		
	}
	
	for (i = 1; i <= 32; i++)
		{ 
			if (mask & b) 
				resultb += '1';
			else
				resultb += '0';
			b <<= 1;
		}
	
	
	for (i = 2 ; i <= 7; i++) {
		resultb[3+c] = resulta[i];
		c++;
	}
	
	for (i = 1; i <=32; i++) {
		cout <<resultb[i];
	}
	
}