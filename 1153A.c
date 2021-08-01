#include<stdio.h>
int main()
{
    int t,n,a[100][4],i,j,x,f=0,tem;
    scanf("%d %d",&n,&t);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a[i][1],&a[i][2]);
        a[i][3]=i+1;
    }

    while(f!=1)
    {
        for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        if(a[i][1]>a[j][1])
    {
        tem = a[i][1];
        a[i][1]=a[j][1];
        a[j][1]=tem;
        tem = a[i][2];
        a[i][2]=a[j][2];
        a[j][2]=tem;
        tem = a[i][3];
        a[i][3]=a[j][3];
        a[j][3]=tem;
    }
        for(i=0; i<n; i++)
        {
            if(t<=a[i][1])
            {
                printf("%d\n",a[i][3]);
                f=1;
                break;
            }
        }
        for(i=0; i<n; i++)
        {
            if(f==1)
                break;
            a[i][1] += a[i][2];
        }
    }
    return 0;
}
