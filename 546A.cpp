#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int k,w,i;
    long long int n,x=0;
    scanf("%d %164d %d",&k,&n,&w);
    for(i=1;i<=w;i++)
        x+=i*k;
    if(x>n)
        printf("%d",x-n);
    else
        printf("0");
    return 0;
}
