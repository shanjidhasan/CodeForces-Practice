#include<stdio.h>
int main ()
{
    int t,i,j;
    long long int x[1000][3],y[1000];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
        scanf("%I64d %I64d %I64d",&x[i][1],&x[i][2],&x[i][3]);
    for(i=1; i<=t; i++)
    {
       if(x[i][3]%2==1)
        y[i]=x[i][1]*(x[i][3]/2+1)-x[i][2]*(x[i][3]/2);
       else
        y[i]=x[i][1]*(x[i][3]/2)-x[i][2]*(x[i][3]/2);
    }
    for(i=1;i<=t;i++)
        printf("%I64d\n",y[i]);
    return 0;
}
