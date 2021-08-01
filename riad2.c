#include<stdio.h>
#include<math.h>
int main()
{
    int data[100],n,k,sum=0,i;
    float avg,a[100],ans[100],std=0.0,std1;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&data[i]);
            sum=sum+data[i];
        }
        avg=sum/n;
        for(i=0;i<n;i++)
        {
           std=std+pow((data[i]-avg),2);
        }
        std1=std/n;
        printf("%f",std1);
    }
}
