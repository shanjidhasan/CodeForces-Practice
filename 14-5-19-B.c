#include<stdio.h>
int main()
{
    int n,a[200000],i,j,max=0,f=0,x;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            max = a[i];
            a[i] = a[j];
            a[j] = max;
        }
    }
    max = a[n-1];
    for(i=1; i<=n ;i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[j]>=i)
            {
                f++;
                a[j]=0;
                break;
            }
        }
    }
    printf("%d",f);
    return 0;
}
