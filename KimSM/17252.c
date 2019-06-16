#include <stdio.h>
#include <math.h>

int main() {
	int three[19];
	int a, swt = 0, Rswt = 0;
	for (int i = 0; i < 19; i++) {
		three[i] = pow(3, i);
	}
	scanf("%d", &a);
	for (int i = 18; i >= 0; i--) {
		if (a > three[i]) {
			swt = i;
			break;
		}
	}
	for (int i = swt; i >= 0; i--) {
		a -= three[i];
		if (a > three[i - 1]) continue;
		if (a == 1 || a == 0) {
			printf("YES");
			Rswt = 1;
			break;
		}
	}
	if (!Rswt) printf("NO");
	return 0;
}