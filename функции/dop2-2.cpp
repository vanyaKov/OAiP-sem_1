#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <sstream>
using namespace std;
void GiveVariant2Task2(char str[]);
int main(int argc, char *argv[]) {
	char str[20];
	cin >> str;
	GiveVariant2Task2(str);
	return 0;
}

void GiveVariant2Task2(char str[]) {
	int i;
	int length = strlen(str);
	for (i = 0; i < length; i++) {
		if (str[i] > -129 and str[i] < -18) {
			cout << str[i];
		}
		else {
			cout << "?";
		}
	}
}