#include<stdio.h>
int main()
{
    int k,w,i,y;
    long long int n,x=0;
    scanf("%d %164d %d",&k,&n,&w);
    x=k*w*(w+1)/2;
    y=x-n;
    if(y>0)
        printf("%d\n",y);
    else
        printf("0");
    return 0;
}
