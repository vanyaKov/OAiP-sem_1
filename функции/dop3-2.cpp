#include <iostream>

using namespace std;
void sum(char str[]);
int main(int argc, char *argv[]) {
	char str[80];
	cin >> str;
	sum(str);
	return 0;
}

void sum(char str[]){
	int sum = 0;
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] == ' ') {
			continue;
		}
		sum += str[i];
	}
	cout << sum;
}