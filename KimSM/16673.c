#include <stdio.h> 

int main() {
	int c, k, p, temp, temp2 = 0, i;
	scanf("%d %d %d", &c, &k, &p);
	for (i = 1; i <= c; i++) {
		temp = (k * i) + (p * i * i);
		temp2 += temp;
	}
	printf("%d", temp2);
	return 0;
}