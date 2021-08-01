#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,s,k,a1,ans1,ans2,ans,i,a[1010],f;
    cin>>t;
    while(t--)
    {f = 0;
        ans1 = LONG_LONG_MAX;
        ans2 = LONG_LONG_MAX;
        cin>>n>>s>>k;

        for(i=0; i<=n; i++)
        {
            a[i] = 0;
        }
        for(i=0; i<k; i++)
        {
            cin>>a1;
            a[a1] = 1;
        }
        for(i = s; i<=n; i++)
        {
            if(a[i]==0)
            {
                ans1 = i;f = 1;
                break;
            }
        }
        //cout<<i<<endl<<ans1<<endl<<endl;
        for(i = s-1; i>0; i--)
        {
            if(a[i]==0)
            {
                ans2 = i;
                break;
            }
        }
        //cout<<i<<endl<<ans2<<endl<<endl;
        if(ans1-s <= s-ans2 || i == 0)
            ans = ans1-s;
        else if(ans1-s > s-ans2 || f != 1)
            ans = s-ans2;
          // cout<<ans1<<endl<<ans2<<endl;
        cout<<ans<<endl;
    }
    return 0;
}
