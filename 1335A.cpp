#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,f,j,ans;
    cin>>t;
    while(t--)
    {ans = 0;
        cin>>n;
        if(n%2==0)
            ans = n/2-1;
        else
            ans = n/2;
        cout<<ans<<"\n";
    }
    return 0;
}


