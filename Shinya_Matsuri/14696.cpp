#include <stdio.h>
#include <string.h>
int main()
{
    int n,m,x,i,j,a[5],b[5];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &m);
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(j=0; j<m; j++) {
        scanf("%d", &x);
        a++;
    }
    scanf("%d", &m);
    for(j=0; j<m; j++) {
        scanf("%d", &x);
        b++;
    }
    if(a[4]>b[4]) puts("A");
    else if(a[4]<b[4]) puts("B");
    else if(a[3]>b[3]) puts("A");
    else if(a[3]<b[3]) puts("B");
    else if(a[2]>b[2]) puts("A");
    else if(a[2]<b[2]) puts("B");
    else if(a[1]>b[1]) puts("A");
    else if(a[1]<b[1]) puts("B");
    else puts("D");
    }
}