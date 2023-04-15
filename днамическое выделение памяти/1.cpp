#include <iostream>
using namespace std;

int main(){
	
	int *pa, n, count = 0, zero = 0, sum = 0;
	cin >> n;
	pa = (int*)malloc(n);
	
	for (int i = 0; i< n; i++) {
		cin >> pa[i];
	}
	
	for (int i = 0; i < n; i++) {
		if (pa[i] > 0) {
			count++;
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (pa[i] == 0) {
			zero = i;
		}
	}
	
	for (int j = zero;  j < n; j++ ) {
		 sum += pa[j];
	}
	
	cout << sum << endl;
	cout << count;
	
	free(pa);
	
	return 0;
}