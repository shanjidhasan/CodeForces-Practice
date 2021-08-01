#include<stdio.h>
int main()
{
    int i,j,k,a[6],b[6];
    int t,x=0,y=0,l,f=0;
    for(i=0; i<6; i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0; i<1; i++)
    {
        for(j=i+1; j<5; j++)
        {
            for(k=j+1; k<6; k++)
            {
                for(l=0;l<6;l++)
                a[l]=b[l];
                y=0;
                x = a[i]+a[j]+a[k];
                a[i]=0;
                a[j]=0;
                a[k]=0;
                for(l=1;l<6;l++)
                    y = y+a[l];
                if(x==y)
                    f=1;
            }
        }
    }
    if(f==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
