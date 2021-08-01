#include<stdio.h>
int main()
{
    int n,m,i,j=0,k=1;
    scanf("%d %d",&n,&m);
    if(m>=n/2)
        k=n/2;
    else
        k=m;
    if(m==n)
        k=0;
    else if(m==0)
        k=1;
    printf("%d",k);
    return 0;
}
