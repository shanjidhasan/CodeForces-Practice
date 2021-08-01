#include<stdio.h>
int main()
{
    int m,n,i,j,f=0,x=0;
    scanf("%d %d",&m,&n);
    for(i=m+1;i<=n;i++)
    {
        f=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f!=1)
        {
            x = i;
            break;
        }
    }
    if(n==x)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
