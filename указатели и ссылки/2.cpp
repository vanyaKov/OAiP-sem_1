#include <iostream>

using namespace std;
void otr(int** Arr, int row, int col);
int main(int argc, char *argv[]) {
	int N, M, i, j;
	int** Array;
	
	cin >> N;
	cin >> M;
	
	Array = new int*[N];
	for (i = 0; i < N; i++) {
		Array[i] = new int[M];
	}
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			cin >> Array[i][j];
		}
	}
	
	otr(Array, N, M);
	
	delete[] Array;
	return 0;
}

void otr(int** Arr, int row, int col){
	int index = 0, number;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (Arr[i][j] < 0) 
				index = j;
		}
	}
	
	for (int i = 0; i < row; i++) {
		Arr[i][index] /= 2;
	}
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << Arr[i][j] << endl;
		}
	}
	
}

