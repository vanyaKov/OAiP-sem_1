#include <iostream>

using namespace std;
int main() {
	int n;
	cin >> n;
	int b[n], c = 0, max;
	
	
	int *pa;
	pa = (int*)malloc(n);
	
	for (int i = 0; i < n; i++) 
		cin >> pa[i];
	
	for (int i = 0; i < n; i++) {
		if (pa[i] < 0) {
			b[c] = pa[i];
			c++;
		}
	}
	max = b[0];
	
	for (int i = 0; i < c; i++) {
		if (max < b[i]) {
			max = b[i];
		}
	}
	
	cout << max;
	free(pa);
	
	return 0;
	
}