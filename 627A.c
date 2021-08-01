#include<stdio.h>
int main()
{
    long long int n;
    int x=0,y[4]={1,2,3,4,5},i;
    scanf("%164d",&n);
    for(i=4;i>=0;i++)
    {
        if(n>y[i]){
       x=x+n/y[i];
        n=n%y[i];}
        else
            break;
    }
    printf("%d",x);
    return 0;
}


