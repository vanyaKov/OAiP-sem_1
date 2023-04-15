#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	int size, i, j, ** A, str_num = 0, el;
	bool flag = false;
	cin >> size;
	A = new int* [size * size];
	
	for (i = 0; i < size; i++) {
		
		A[i] = new int[size];
		
		flag = false;
		for (j = 0; j < size; j++) {
			cin >> A[i][j];
			if (A[i][j] > 0) {
				flag = true;
			}
		}
		if (flag == false) {
			el = A[i][0];
			str_num = i;
		}
		
	}
	
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			A[i][j] += el;
		}
	}
	
	for (i = 0; i < size; i++) {
		cout << endl;
		for (j = 0; j < size; j++) {
			cout << A[i][j] << "  ";
		}
	}
	
	for (i = 0; i < size; i++) {
		delete[] A[i];
	}
	delete[] A;
	return 0;
}