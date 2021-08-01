#include<iostream>
#include<cmath>
using namespace std;
#include<cstdio>
int main()
{
    double ab,ac,bc,r,t;
    int i;
    cin>>t;
    for(i=1;i<=t;i++){
    double ad;
    cin>>ab>>ac>>bc>>r;
    ad = 1.0*ab*sqrt( 1.0*r / (r+1));
    printf("Case %d: %.6lf\n",i,ad);
    }
    return 0;
}
