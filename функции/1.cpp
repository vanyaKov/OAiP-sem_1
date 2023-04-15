#include <iostream>

using namespace std;

int matr(void);

int main()
{
	
	matr();
	return 0;
}



int matr()
{
	int x, y;
	cin >> x;
	cin >> y;
	int count1 = 0, count2 = 0, count3 = 0;
	
	int **matr;
	matr = new int* [y];
	for (int i = 0; i < y; i++)
		matr[i] = new int[x];
	
	for (int i = 0; i < x; i++) 
		for (int j = 0; j < y; j++) 
		cin >> matr[i][j];
	
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			
			if (matr[i][j] == 0) {
				count1++;
			}
			
			if (matr[i][j] > 0) {
				count2++;
			}
			
			if (matr[i][j] < 0) {
				count3++;
			}
		}
	}
	cout <<count1 << ' ' << count2 << ' ' << count3;
	delete[] matr;
}
