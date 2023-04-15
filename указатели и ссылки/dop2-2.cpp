#include <iostream>

using namespace std;

void matr(){
	
	int n, m;
	cin >> n >> m;
	int matrix[n][m], index;
	
	for (int i = 0; i < n; i++) {
		for (int g = 0; g < m; g++) {
			cin >> matrix[i][g];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int g = 0; g < m; g++) {
			if (matrix[i][g] < 0) {
				index = i;
			
			} 
		}
	}
	
	if (index != 0) {
		for (int i = index-1; i < index; i++) {
			for (int g = 0; g < m; g++) {
				matrix[i][g] *= -1;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int g = 0; g < m; g++) {
			cout << matrix[i][g] << ' ';
		}
	}
	
}

int main(int argc, char *argv[]) {
	matr();
}

