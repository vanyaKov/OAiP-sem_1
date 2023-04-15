#include <iostream>
#include "ctime"

using namespace std;
int main(int argc, char *argv[]) {
	srand((unsigned)time(NULL));
	int n,max=0,index1=1,index2=1,res=1;
	cin >> n;
	float matrix[n][n];
	
	// создание 
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			matrix[i][j]=rand()%15;
		}
	}
	// вывод
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			cout << matrix[i][j]<< " ";
		}
		cout << endl;
	}
	
start:
	// поиск max
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			if (matrix[i][j]>max) {
				max=matrix[i][j];
				index1=i;
				index2=j;
			}
		}
	}

			matrix[index1][index2]=matrix[res][res];
			matrix[res][res]=max;
			res++;

	if (res<n) {
		goto start;
	}
			
	cout << endl;
	// вывод
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			cout << matrix[i][j]<< " ";
		}
		cout << endl;
	}
}