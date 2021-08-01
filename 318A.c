#include<stdio.h>
int main()
{
    long long n,k,part,output;

    scanf("%I64d %I64d",&n,&k);

    if(n%2==0)
    {
        part=n/2;
    }
    else
    {
        part=(n/2)+1;
    }

    if(k<=part)
    {
        output=(2*k)-1;
    }
    else
    {
        output=(k-part)*2;
    }

    printf("%I64d",output);
    return 0;
}
