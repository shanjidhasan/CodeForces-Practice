#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,n,z,ans;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        z = n%x;
        if(z<y)
            ans = z+x-y;
        else if(z>y)
            ans = z - y;
        else
            ans = 0;
        cout<<n-ans<<endl;
    }
    return 0;
}
