#include <stdio.h>
int main() {
	int al[4], bl[4], i, j,r, anum, bnum, a, b;
	scanf("%d", &r);
	for (j = 1;j <= r;j++)
	{
		for (i = 0;i <= 3;i++) {
			al[i] = { 0 };
			bl[i] = { 0 };
		}
		scanf("%d", &anum);
		for (i = 1;i <= anum;i++) {
			scanf("%d", &a);
			al[a - 1]++;
		}
		scanf("%d", &bnum);
		for (i = 1;i <= bnum;i++) {
			scanf("%d", &b);
			bl[b - 1]++;
		}
		for (i = 3;i >= 0;i--) {
			if (al[0] == bl[0] && al[1] == bl[1] && al[2] == bl[2] && al[3] == bl[3]) {
				printf("D\\n");
				break;
			}
			if (al[i] < bl[i]) {
				printf("B\\n");
				break;
			}
			if (al[i] > bl[i]) {
				printf("A\\n");
				break;
			}
		}
	}
	return 0;
}
//#define d(t)for(scanf("%d",&n);n--;t+=m)scanf("%d",&x);
//m[5]={0,1,200,40000,8000000};main(r,n,a,b,x){scanf("%d",&r);while(r--){a=b=0;d(a)d(b)puts(a<b?"B":a>b?"A":"D");}}

