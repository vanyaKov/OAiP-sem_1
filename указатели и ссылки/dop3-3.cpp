#include <iostream>

using namespace std;


void matr(){
	int **matrix, n, m, sum = 0;
	cin >> n >> m;
	matrix = new int* [m];
	for (int i = 0; i < m; i++){
		matrix[i] = new int[n];
	}
	
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix[i][j];
		}
	}
	
	
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] > 0) {
				sum = 0;
				break;
			}
			else {
				sum += matrix[i][j];
			}
		}
		if (sum !=0) {
			break;
		}
	}
	
	
	sum /= m;
	cout << sum << endl;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matrix[i][j] -= sum;
			
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
	
	delete[] matrix;
}

int main(int argc, char *argv[]) {
	matr();
	return 0;
}