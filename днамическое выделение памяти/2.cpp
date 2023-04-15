#include <iostream>

using namespace std;
int main() {
	int n, m, column, **matrix;
	
	cin >> m;
	cin >> n;

	
	matrix = new int* [m];
	for (int i = 0; i < m; i++)
		matrix[i] = new int[n];
			

	
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < m; j++) 
			cin >> matrix[i][j];
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (matrix[i][j] == 0) {
				column = j;
			}
		}
	}
	cout << column;
	delete[] matrix;
	return 0;
}