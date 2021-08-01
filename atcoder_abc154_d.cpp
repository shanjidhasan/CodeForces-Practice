#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string s1,s2,s3;
    long long int k,n,m,i,a[200010],f=0,j,min,x,sum;
    double d;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }sum=0;
    for(i=0;i<k;i++)
    {
        sum+=a[i];
    }
    min = sum;
    x = 0;
    for(i=1;i<n-k+1;i++)
    {
        sum = sum-a[i-1]+a[i-1+k];
        if(min<sum)
        {
            min = sum;
            x = i;
        }
    }d = 0;
    for(i=x;i<x+k;i++)
    {
        d = d+(a[i]+1)*1.0/2;
    }
    printf("%.12lf\n",d);
    return 0;
}



