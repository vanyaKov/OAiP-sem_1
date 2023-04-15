#include <iostream>

using namespace std;

int rand(int* m)
{
	int sum = 0;
	for (int i = 0; i < 15; i++)
		if (m[i] % 2 == 1)
		sum += m[i];
	return sum;
}

int main()
{
	int *mattrix = new int[15];
	
	for (int i = 0; i < 15; i++)
		{
			mattrix[i] = rand() % 200;
			cout << mattrix[i] << " ";
		}
	
	cout << endl;
	
	cout << rand(mattrix) << endl;
	
	return 0;
}
