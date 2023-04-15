#include <iostream>

using namespace std;
int main() {
	
	int n,m, numb;
	
	cin >> n;
	cin >> m;
	
	int a[n][m];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; i < m; i++) {
			
			if (a[i][j] < 0) {
				
				numb = i;
				cout << i << endl;

				for (int g = 0; g < n; g++) {
					a[g][numb] /= 2;
				}
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << endl;
		}
	}
	
	return 0;
}