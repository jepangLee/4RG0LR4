#include <stdio.h>
#include <math.h>
int main()
{
    int n,m=19,r,s=0;
    scanf("%d", &n);
    while(n>0 && m>=0) {
    r=(int)pow(3,m);
    if(n-r>=0) n-=r;
    m--;
    if(!n) {printf("YES");s=1;}
    }
    if(!s) printf("NO");
}