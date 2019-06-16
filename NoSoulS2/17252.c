#include<stdio.h>
int main() {
    int n,i,t=0;
    scanf("%d",&n);
    for(i=0;n>0;i++){
        if(n%3==2){
            printf("NO");
            return 0;
        }
    if(n%3==0) t++;
    n/=3;
    }
    if(t==i) printf("NO");
    else printf("YES");
    return 0;
}
//main(n,i,t){i=t=0;scanf("%d",&n);for(;n>0;i++){if(n%3==2){puts("NO");return 0;}if(n%3==0)t++;n/=3;}puts(t==i?"NO":"YES");}
