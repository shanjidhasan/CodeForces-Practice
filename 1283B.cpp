#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ans,t,h,a,b,c,x,y,z,m;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        x = h/m;
        if(h%m<=m/2)
            ans = h;
        else
            ans = x*m + m/2;
        cout<<ans<<endl;
    }
}

