#include <iostream>
#include <cstring>

using namespace std;

int stringled(void);
int main(int argc, char *argv[]) {
	
	stringled();
	return 0;
}

int stringled(){
		char s[80];
		int slovo, count = 0;
		
		cin.get(s, 80);
		int i = 0;
		
		slovo = 0;
		
		while (s[i] != '\0') {
			if (s[i] != ' ' && slovo == 0)
				{
					slovo = 1;
					count++;
				}
			else if (s[i] == ' ')
				slovo = 0;
			i++;
		}
		cout << count;
}