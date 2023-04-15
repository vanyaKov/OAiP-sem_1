#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int main() {
	
	char s[50];
	gets(s);
	
	for (int i = 0; i < strlen(s); i++) 
		for (int j = 0; j < i; j++) 
			if (s[i] == s[j])
				s[i] = ' ';
	for (int i = 0; i < strlen(s); i++) {
		cout << s[i];
	}
		
	return 0;
	
}