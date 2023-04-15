#include <iostream>
#include <ctime>

using namespace std;
int main(int argc, char *argv[]) {
	srand((unsigned)time(NULL));
	int n,buffer=0;
	cin >> n;
	int matrix[n][n];

	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			matrix[i][j]=rand()%20 -10;
		}
	}

	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;

	for (int i=n;i>=1;i--) {
		for (int j=n;j>=1;j--) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}