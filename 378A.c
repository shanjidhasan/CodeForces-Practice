#include<stdio.h>
int main()
{
    int a,b,i,x,y,z,m=0,n=0,o=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<=6;i++)
    {
        x = a-i;
        y = b-i;
        if(x<0)
            x = -x;
        if(y<0)
            y = -y;
        if(x<y)
            m++;
        if(y<x)
            n++;
        if(x==y)
            o++;
    }
    printf("%d %d %d",m,o,n);
    return 0;
}
