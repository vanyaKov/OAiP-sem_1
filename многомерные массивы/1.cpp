#include <iostream>

using namespace std;
int main() {
	
	int n,m;
	
	cin >> n;
	cin >> m;
	
	int a[n][m], b[n][m], count1 = 0, count2 = 0, count3 = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			
			cin >> a[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			
			cin >> b[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			
			if (a[i][j] < b[i][j]) {
				count1 += 1;
			}
			
			if (a[i][j] == b[i][j]) {
				count2 += 1;
			}
			
			if (a[i][j] > b[i][j]) {
				count3 += 1;
			}
		}
	}
	
	cout << count1<< endl;
	cout << count2<< endl;
	cout << count3;
	
	
	return 0;
}