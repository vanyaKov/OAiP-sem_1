#include <iostream>
#include <cmath>
using namespace std;

void sqrt_func(float ar[], int row);
int main(){
	int n;
	cin >> n;
	float arr[n];
	
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	sqrt_func(arr, n);
}

void sqrt_func(float ar[], int row){
	
	double razn, minrazn, dsum=0, psum=0;
	int i, j, ans=0;
	for (int i = 0; i < row; i++) {
		if (ar[i]< 0) {
			ar[i] = pow(ar[i], 2) ;
		}
	}
	for (int i = 0; i<row; i++) {
		cout << ar[i] << ' ';
	}
}