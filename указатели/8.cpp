#include <iostream>

using namespace std;
int main(){
	int *one, *two,k, n, count=0, result;
	cin >> k;
	cin >> n;
	
	int x[k], y[n], z[100];
	
	one = &x[k];
	two = &y[n];
	
	for (int i = 0; i < k; i++) {
		cin >> one[i];
	}
	
	for (int i = 0; i < n; i++) {
		cin >> two[i];
	}
	
	for (int i = 0; i < k; i++) {
		
		for (int g = 0; g < n; g++) {
			
			if (one[i] == two[g]) {
				count++;
				bool flag = true;
				
				for (int j = 0; j < count; j++) {
					
					if (z[j] == one[i])
						{
							continue;
						}
				}
				
				if(flag){
					
						cout << one[i] << '\n';
					
				}
				
			}
		}
	}
	

	return 0;
}