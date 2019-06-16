#include <stdio.h>

int main() {
	int c, k, p, i, sum = 0;
	
	scanf("%d %d %d", &c, &k, &p);
	
	while(c){
		sum += (k*c) + (p*(c*c));
		c--;
	}
	
	printf("%d", sum);
	
	return 0;
}
