#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,x,r,n1,ans,ans1,a,b;
    cin>>t;
    while(t--)
    {
        cin>>x;
        ans = 0;
        a=1;
        b=2;
        while(x>0)
        {
            ans1=(a*(a+1))/2;
            a+=b;
            b=2*b;
            if(x-ans1>=0)
            {
                x=x-ans1;
                ans++;
            }
            else
                break;

        }
        cout<<ans<<endl;
    }
    return 0;
}

