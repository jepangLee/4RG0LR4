#include <iostream>
#include <math.h>
int main()
{
	int in, check = 0, de = pow(3, 17);
	std::cin >> in;
	if (in <= 0) {
		printf("NO");
		return 0;
	}
	for ( ; de > 0; de /= 3) {
		if (in - de >= 0) in -= de;
		if (0 == in) {
			printf("YES \n");
			return 0;
		}
	}
	printf("NO\n");
}