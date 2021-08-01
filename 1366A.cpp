#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c,ans;
    cin>>t;
    while(t--)
    {ans = 0;
        cin>>a>>b;
        if(a == 0 || b == 0)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            ans = min((a+b)/3,min(a,b));
            cout<<ans<<endl;
        }
       // cout<<ans<<endl;
    }
    return 0;
}
