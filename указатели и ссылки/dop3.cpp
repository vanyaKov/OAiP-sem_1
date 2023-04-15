#include <iostream>

using namespace std;

void seven()
{
	long long int p = 1;
	int *matrix = new int[15];
	
	for (int i = 0; i < 15; i++)
		{
			matrix[i] = rand() % 200;
			cout << matrix[i] << endl;
		}
	for (int i = 2; i < 7; i++)
		p *= matrix[i];
	cout << p;
	delete[] matrix;
}


int main(int argc, char *argv[]) {
	
	seven();
	return 0;
}