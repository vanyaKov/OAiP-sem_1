#include <iostream>

using namespace std;
int main() {
	int n, count=0, min, sum = 0;
	
	cin >> n;
	
	int *pa;
	
	pa = (int*)malloc(n);
	
	for (int i = 0; i < n; i++) {
		cin >> pa[i];
	}
	
	min = pa[0];
	
	for (int i = 0; i < n; i++) {
		if (min > pa[i]) {
			min = i;
		}
	}
	
	for (int i = min; i < n; i++) {
		sum += pa[i];
	}
	
	for (int i = min; i < n; i++) {
		if (pa[i] == 0) {
			count++;
		}
	}
	
	cout << count << endl;
	cout << sum;
	free(pa);
	
	return 0;
}