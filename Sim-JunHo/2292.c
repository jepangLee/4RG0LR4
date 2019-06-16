#include <stdio.h>

int main() {
	int c = 1, n,r=6;
	
	scanf("%d", &n);
	n--;
	
	for(;n>0;r+=6) {
		n -= r;
		c++;
	}
	
	printf("%d", c);
	
	return 0;
}
