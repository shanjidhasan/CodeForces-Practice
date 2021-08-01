#include<stdio.h>
int main()
{
    int a[30][40];
    int n,i,j,k,tem;
    int sum[100];
    printf("Enter the number of student:\n");
    scanf("%d",&n);
    int temp;
    for(i=0; i<4; i++)
    {
        sum[i]=0;
    }
    for(i=0; i<n; i++)
    {
        a[i][4] = i+1;
        for(j=0; j<4; j++)
        {
            printf("Enter marks : ");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<4; j++)
        {
            for(k=0; k<4; k++)
            {
                if(a[i][j]<a[i][k])
                {
                    temp=a[i][k];
                    a[i][k]=a[i][j];
                    a[i][k]=temp;
                }
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<4-1; j++)
        {
            sum[i]=sum[i]+a[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(sum[i]<sum[j])
            {
                tem = sum[i];
                sum[i] = sum[j];
                sum[j] = tem;
                tem = a[i][4];
                a[i][4] = a[j][4];
                a[j][4] = tem;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d\tSUM = %d\n",a[i][4],(sum[i]/3));
    }
}
