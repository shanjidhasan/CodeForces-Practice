#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,x,y,j,i;
    scanf("%d %d",&n,&t);
    if(t<10)
    x=t*round(pow(10,(n-1)));
    else if(t==10&& n>1)
    x=t*round(pow(10,(n-2)));
    else
        x=-1;
    printf("%d",x);
    return 0;
}
