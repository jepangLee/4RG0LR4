main() {
    int n,c=1,r=6;
    scanf("%d", &n);
    if(n==1) {printf("1");return 0;}
    n--;
    while(n>0) {
    c++;
    n-=r;
    r+=6;
    }
    printf("%d", c);
}