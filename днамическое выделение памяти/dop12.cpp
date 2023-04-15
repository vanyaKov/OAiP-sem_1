#include <iostream>

using namespace std;
int main() {
	int n, m, position, position2, max, numb, **matrix;
	cin >> m >> n;
	
	matrix = new int* [m];
	for (int i = 0; i < m; i++)
		matrix[i] = new int[n];
	
	
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < m; j++) 
			cin >> matrix[i][j];
	
	max = matrix[0][0];
	numb = matrix[0][0];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (max < matrix[i][j]) {
				max = matrix[i][j];
				position = i;
				position2 = j;
				
			}
		}
	}
	
	matrix[position][position2] = numb;
	matrix[0][0] = max;
	

	for (int  i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matrix[i][j];
		}
	}
	
	delete[] matrix;
	
	return 0;
}