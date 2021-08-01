#include<stdio.h>
int main()
{
    int i,f=0,m,n;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
       f++;
       if(i%m==0)
            n++;
    }
    printf("%d\n",f);
    return 0;
}
