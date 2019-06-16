#include <stdio.h>
int main() {
	int n,r=1,c=1,temp=1;
	scanf("%d",&n);
	while(1){
		if(r>=n) break;
		temp=6*c;
		c++;
		r+=temp;
	}
	printf("%d",c);
}
