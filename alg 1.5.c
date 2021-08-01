#include<stdio.h>
int main()
{
    int k,LOC,n,X;
    printf("Enter the length of array :");
    scanf("%d",&n);
    int a[n];
    for(k=1; k<=n; k++)
    {
        scanf("%d",&a[k]);
    }
    printf("Enter a number to search : ");
    scanf("%d",&X);
    k=1;
    LOC =-1;
    while(LOC == -1 && k<=n)
    {
        if(X==a[k])
        {
            LOC = k;
        }
        k=k+1;
    }
    if(LOC== -1)
        printf("%d is not in the array.\n",X);
    else
        printf("%d is in %d th position\n",X,LOC);
    return 0;
}

