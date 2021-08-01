#include<stdio.h>
int main()
{
    int c=0,n,a[1000],i,max,min;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    max = a[0];
    min = a[0];
    for(i=1; i<n; i++)
    {
        if(max<a[i])
        {
            max = a[i];
            c++;
        }
        if(min>a[i])
        {
            min = a[i];
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
