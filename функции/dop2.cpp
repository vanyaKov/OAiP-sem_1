#include <iostream>

using namespace std;
void GiveVariant2Task1(float** Arr, int row, int col);
int main(int argc, char *argv[]) {
	int N, M, i, j;
	float** Array;
	cin >> N;
	
	cin >> M;
	Array = new float* [N];
	for (i = 0; i < N; i++) {
		Array[i] = new float[M];
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			cin >> Array[i][j];
		}
	}

	GiveVariant2Task1(Array, N, M);
	for (i = 0; i < N; i++) {
		delete Array[i];
	}
	delete[] Array;
	
	return 0;
}

void GiveVariant2Task1(float** Arr, int row, int col) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (Arr[0][0] == 0)
				break;
			Arr[i][j] += 1;
		}
	}	
	
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			cout << Arr[i][j]  << " ";
		}
	}
}