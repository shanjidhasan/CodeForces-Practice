#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,k=0,p;
    double ans;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>p;
        k+=p;
    }
    ans = k*1.0/n;
    cout<<setprecision(15)<<ans<<endl;
    return 0;
}

