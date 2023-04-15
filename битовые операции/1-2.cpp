#include <iostream>
#include "string"

using namespace std;
int main() {
	
	unsigned int A,B,n,p,q,m,k=1;
	string resultA="", resultB="";
	const unsigned int mask = 1 << 31;
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
	
	
	cin >> n >> m;

	
	for (int i=n;i<=n+3;i++) {
		resultB[m+(n+3-i)]=resultA[i];
	}
	
	for (int i=1;i<=32;i++) {
		cout << resultB[i];
	}
}