#include <iostream>

using namespace std;

void arra(int *arr, int count);
int main(int argc, char *argv[]) {
	
	int count;
	cin >> count;
	int *arr;
	
	arra(arr, count);
	return 0;
}

void arra(int *ar, int count){
	int max, min,i, mindex, maxindex, sum = 0;
	ar = (int*)malloc(count);
	for ( i = 0; i < count; i++)
		cin >> ar[i];
	
	min = ar[0];
	max = ar[0];
	
	for (i = 0; i < count; i++) {
		if (min > ar[i]) 
			mindex = i;
		
		if (max < ar[i] )
			maxindex = i;
	}
	
	
	if (maxindex < mindex) {
		
		for (i = mindex+1; i > maxindex; i--) {
			sum += ar[i];
		}
		
		cout << sum;
	}
	
	else {
		for (i = mindex+1; i < maxindex; i++) {
			sum += ar[i];
		}
		cout << sum;
	}
	
	free(ar);
	
}
