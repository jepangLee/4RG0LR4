#include <stdio.h>

int main() {
	int n, thr = 3, i = 0, j = 0, tmp = 0;
	
	scanf("%d", &n);
	for(i = 0; i < n; i*=3) {
		if(n%i==0) {
			n=n/i;
		}
	}
	
	return 0;
}
