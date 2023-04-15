#include <iostream>
using namespace std;
int main()
{ 
	setlocale(LC_CTYPE, "Russian");
	unsigned int a;
	int n;
	
	
	const unsigned int  mask = 1 << 31;
	
	string resulta;
	
	cout << "Введите целое число ";
	cin >> a;
	cin >> n;
	
	
	for (int i = 1; i <= 32; i++)
	{ 
		if (mask & a) 
			resulta += '1';
		else
			resulta += '0';
		a <<= 1;
	}
	
	for (int i = 2*n; i <=n*2+6; i++) {
		cout << resulta[i];
	}
	
	return 0;
}