#include<stdio.h>
int main()
{
    int n,a,b,i,f=0;
    scanf("%d %d %d",&n,&a,&b);
    for(i=1;i<=n;i++)
        if(i-1>=a && n-i<=b)
        f++;
    printf("%d",f);
    return 0;
}
