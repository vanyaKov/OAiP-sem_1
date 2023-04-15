#include <iostream>

using namespace std;

int sqrt_func(int** Arr, int k, int row, int col);
int main(int argc, char *argv[]) {
	int N, M, k, i, j;
	int** Array;
	cin >> N;
	cin >> M;	cin >> k;
	Array = new int*[N];
	for (i = 0; i < N; i++) {
		Array[i] = new int[M];
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			cin >> Array[i][j];
		}
	}
	cout << "Column number: " << GiveVariant10Task1(Array, k, N, M) << endl;
	for (i = 0; i < N; i++) {
		delete Array[i];
	}
	delete[] Array;
	return 0;
}

int GiveVariant10Task1(int** Arr, int k, int row, int col) {
	int i, j;
	int col_num = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (Arr[i][j] == k) {
				col_num = j;
			}
		}
	}
	return col_num;
}
