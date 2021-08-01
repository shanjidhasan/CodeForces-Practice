#include<stdio.h>
int main()
{
    int o,m,n,i,j,c=0,x,y;
    scanf("%d %d",&n,&m);
    o=(n<m)?n:m;
    for(i=0;i<=o;i++)
    {
        for(j=0;j<=o;j++)
        {
            x = i*i + j;
            y = i + j*j;
            if(x==n && y==m)
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
