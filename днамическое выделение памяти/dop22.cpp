#include <iostream>

using namespace std;
int main() {
	int n, m, column, c=0, ind = 0, **matrix, b[100];
	cin >> n >> m;
	
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
				b[c] = column;
				c++;
			}
		}
	}
	
	free(matrix);
	
	cout << c;
	
	

	return 0;
}