#include<stdio.h>
int main()
{
    int n,a[100],j,i,k[100],max=0,x,e=0,o=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        k[i]=0;
        for(j=i; j<n; j++)
        {
            if(a[i]==a[j])
                k[i]++;
        }
    }
    for(i=0; i<n; i++)
        if(max<k[i])
        {
            max=k[i];
            x=i;
        }
    if(max==n-1)
    {
        for(i=0; i<n; i++)
            if(a[i]!=a[x])
            {
                printf("%d",i+1);
                break;
            }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                e++;
            else
                o++;
        }
        if(e==n-1)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]%2!=0)
                {
                    printf("%d",i+1);
                    break;
                }
            }
        }
        else if(o==n-1)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]%2==0)
                {
                    printf("%d",i+1);
                    break;
                }
            }
        }
    }
    return 0;
}
