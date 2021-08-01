#include<stdio.h>

int main()
{
    int i,j,n,a[100][100],k=0,t;
    int sum=0;

    printf("Enter the number of student:");
    scanf("%d",&n);
    printf("Student %d:\n",i+1);
        for(j=0;j<4;j++)
        {
        scanf("%d",&a[i][j]);
        sum = sum+a[i][j];
        }
        t = sum;
    for(i=1;i<n;i++)
    {   sum = 0;
        printf("Student %d:\n",i+1);
        for(j=0;j<4;j++)
        {
        scanf("%d",&a[i][j]);
        sum = sum+a[i][j];
        }
        if(t<sum)
            k++;
    }

    for(i=0;i<n;i++)
    {
        sum=0;
        printf("Sum of Student %d:\n",i+1);
        for(j=0;j<4;j++)
        {
            sum=sum+a[i][j];
        }
        printf("%d\n",sum);
    }
    printf("%d\n",k);
}
