#include<stdio.h>
int main()
{
    char a[2000000];
    int x,y,n,f=0,i;
    scanf("%d %d %d",&n,&x,&y);
    scanf("%s",&a);
    if(a[(n-x-1)]=='0')
        f++;
    for(i=(n-x); i<n; i++)
        if(a[i]=='1' && i != (n-y-1))
            f++;
    if(a[(n-y-1)]=='0')
        f++;
    printf("%d",f);
    return 0;
}
