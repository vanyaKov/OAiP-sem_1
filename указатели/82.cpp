#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main() {
	
	int *one, *two,k, n,q, size=0;
	
	cin >> k;
	cin >> n;
	cin >> q;
	
	
	int x[k], y[n], z, s[10];
	
	one = &x[k];
	two = &y[n];
	
	for (int i = 0; i < k;  i++) {
		cin >> one[i];
	}
	
	for (int i = 0; i < n;  i++) {
		cin >> two[i];
	}
	
	int cxp = 0;
	int cyp = 0;
	int dq = abs((one[0]+two[0])-q);
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			if(abs((one[i]+two[j])-q) < dq)  {
				dq = abs((one[i]+two[j])-q); 
				cxp = i;
				cyp = j;
			}
		}
		
	}
	
	printf("\nClosest pair:\n(%d  %d)", one[cxp], two[cyp]);
	return 0;
		
}
