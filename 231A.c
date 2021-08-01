#include<stdio.h>
int main()
{
    int n,k=0,f=0,i,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   k=0;
        scanf("%d %d %d",&a,&b,&c);
        if(a==1)
            k++;
        if(b==1)
            k++;
        if(c==1)
            k++;
            if(k>=2)
                f++;
    }
    printf("%d",f);
    return 0;
}

