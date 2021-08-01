#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,a[1010],ans;
    cin>>t;
    while(t--)
    {ans=0;
        cin>>n>>k;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i = 1 ; i < n ; i++)
        {
            ans+=(k-a[i])/a[0];
        }
        cout<<ans<<endl;
    }
    return 0;
}
