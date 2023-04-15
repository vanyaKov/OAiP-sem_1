#include <iostream>

using namespace std;
int main() {
	
	unsigned int value;
	string result="";
	const unsigned int mask = 1 << 31;
	cin >> value;
	
	for (int i=1;i<=32;i++) {
		if (mask&value) result+='1'; 
		else result+='0';
		value<<=1;
	}
	
	for (int i=1;i<=32;i++) {
		if(i%3==0) result[i]='0';
		cout << result[i];
	}
}