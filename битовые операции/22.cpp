#include <iostream>
using namespace std;
int main()
{ 
	setlocale(LC_CTYPE, "Russian");
	unsigned int a, b;
	int i, p, n;	
	
	const unsigned int  mask = 1 << 31;
	
	string resulta;
	
	cout << "Введите целое число ";
	cin >> a;
	cin >> n;
	cin >> p;
	
	
	for (i = 1; i <= 32; i++)
	{ 
		if (mask & a) 
			resulta += '1';
		else
			resulta += '0';
		a <<= 1;
	}
	
	int razn = p - n;
	while (p >= razn)
		{
			a |= 1 << p;
			resulta = a;
			p--;
			
	}
	
	for (i = 1; i <=32; i++) {
		cout << resulta[i];
	}
	
	return 0;
}