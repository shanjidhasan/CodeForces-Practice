#include<stdio.h>
int main()
{
    int m,n,max,min,j,k,x;
    scanf("%d %d",&m,&n);
    if(m>n)
    {
        max=m;
        min=n;
    }
    else if(n>m)
    {
        max=n;
        min=m;
    }
    else
    {
          max = m;
        min = n;
    }
    j=max/2;
    k=min/1;
    if(max%2==0)
        x=j*k;
    else
        x=j*k+min/2;
    printf("%d",x);
    return 0;
}
