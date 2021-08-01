#include<stdio.h>
int main()
{
    int n,x,y,z,i,x1=0,y1=0,z1=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            scanf("%d",&x);
            x1=x1+x;
            scanf("%d",&y);
            y1=y1+y;
            scanf("%d",&z);
            z1=z1+z;
        }
if(x1==0 && y1==0 && z1==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}

