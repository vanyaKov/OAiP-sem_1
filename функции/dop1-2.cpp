#include <iostream>

using namespace std;
void GiveVariant10Task2(char str[], char c);
int main(int argc, char *argv[]) {
	
	char str[20];
	char c;
	cin >> str;
	
	cin >> c;
	GiveVariant10Task2(str, c);
	
	return 0;
}

void GiveVariant10Task2(char str[], char c) {
	int i;
	int length = strlen(str);
	for (i = 0; i < length; i++) {
		
		if (str[i] == c) {
			cout << "*";
		}
	}
}