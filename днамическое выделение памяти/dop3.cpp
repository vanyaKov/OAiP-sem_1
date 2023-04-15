#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n, i;
	float sum = 0.0, multipl = 1, min, *pArr;
	cin >> n;
	
	pArr = (float*)malloc(n);
	
	for (int i = 0; i < n; i++) {
		cin >> pArr[i];
	}
	
	for (i = 0; i < n; i++) {
		if (pArr[i] > 0) {
			multipl *= pArr[i];
		}
	}
	
	min = pArr[0];
	
	for (int i = 0; i < n; i++) {
		if (pArr[i] < min) {
			min = pArr[i];
		}
	}
	
	for (int i = 0; i < min ; i++) {
		sum += pArr[i];
	}
	
	cout << multipl;
	

	
	free(pArr);

}