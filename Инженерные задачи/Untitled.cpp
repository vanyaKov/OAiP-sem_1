#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int size, sum = 0, maxsum = -99;
int a[1000];
int main() {
	cin >> size;
	
	for (int i = 0; i < size; i++) {
		cin >> a[i];
		if (a[i] >100 || a[i] < -100) {
			cout<< "error";
		}
	}
	
	
	
	
	for (int i = 0; i < size; i++) 
		if (a[i] > 0) 
			{
				sum += a[i];
				maxsum = max( maxsum, sum);
			}
		else 
			{
				maxsum = max(maxsum, sum);
				sum = 0;
			}
	
	cout << maxsum;
	

	
	return 0;

}