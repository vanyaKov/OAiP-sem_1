#include <iostream>

using namespace std;
void matrixes(int **, int **, int m, int n);
int main(int argc, char *argv[]) {
	int n, m;
	cin >> n >> m;
	int **matrix1, **matrix2;
	matrixes(matrix1, matrix2, n, m);
}

void matrixes(int **matrix1, int **matrix2, int m, int n){
	
	matrix1 = new int* [m];
	for (int i = 0; i < m; i++)
		matrix1[i] = new int[n];
	
	matrix2 = new int*[m];
	for (int i = 0; i < m; i++)
		matrix2[i] = new int[n];
	
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix1[i][j];
		}
	}
	
		
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix2[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			
			if (matrix1[i][j] < 0 || matrix2[i][j] < 0) {
				break;
			}
			
			if (matrix1[i][j] > 0 && matrix2[i][j] > 0) {
				cout << matrix1[i][j] * matrix2[i][j] << ' ';
			}
			
		}
	}
	
}