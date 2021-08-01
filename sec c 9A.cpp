#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    double r,a,pi,t,ans;
    int i;
    pi = 2*acos(0);
    cin>>t;
    for(i=0;i<t;i++)
    {
       cin>>r;
    a = 2*r;
    ans = a*a - pi*r*r;
    printf("Case %d: %.2lf\n",i+1,ans);
    }
    return 0;
}

