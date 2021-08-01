#include<stdio.h>
int main()
{
    int i,n,k,x[50],y=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
        scanf("%d",&x[i]);
    for(i=1;i<=n;i++)
    {
        if(x[i]>=x[k] && x[i]!=0)
            y++;
    }
    printf("%d",y);
    return 0;
}


