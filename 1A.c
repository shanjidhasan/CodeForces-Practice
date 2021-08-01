#include<stdio.h>
int main()
{
    long long int n,m,a,b,c;
    scanf("%I64d %I64d %I64d",&n,&m,&a,&b,&c);
    if(n>0&&m>0&&a>0){
    b=(n+a-1)/a;
    c=(m+a-1)/a;
    printf("%I64d",b*c);}
    return 0;
}

