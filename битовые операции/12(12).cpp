#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	unsigned int value;
	string result="";
	const unsigned int mask = 1 << 31;
	cin >> value;
	for (int i=1;i<=32;i++) {
		if (mask&value) result+='1'; 
		else result+='0';
		value<<=1;
	}
	
	
	for(int i=4;i<=8;i++) {
		if (result[i]=='1') result[i]='0';
			else if (result[i]=='0') result[i]='1';
	}
	
	for(int i=1;i<=32;i++) {
		cout << result[i];
	}
}