#include <iostream>

using namespace std;
int main() {
	unsigned int A, B, n, p, q, m, k=1;
	string resultA="", resultB="";
	const unsigned int mask = 1 << 31;
	cout << "Введите числа A и B ";
	cin >> A >> B;
	
	for (int i=1;i<=32;i++) {
		if (mask&A) resultA+='1'; 
		else resultA+='0';
		A<<=1;
	}
	for (int i=1;i<=32;i++) {
		if (mask&B) resultB+='1'; 
		else resultB+='0';
		B<<=1;
	}
	
	for (int i=1;i<=32;i++) {
		cout << resultA[i];
	}
	
	cout << endl;
	
	for (int i=1;i<=32;i++) {
		cout << resultB[i];
	}
	
	cout << endl;
	
	cin >> n >> p >> m >> q;
	
	for (int i=p;i<=p+n;i++) {
		resultB[m+(p+n-i)]=resultA[i];
		resultA[i]='0';
	}
	
	for (int i=1;i<=32;i++) {
		cout << resultA[i];
	}
	
	cout << endl;
	
	for (int i=1;i<=32;i++) {
		cout << resultB[i];
	}
	
	cout << endl;
}