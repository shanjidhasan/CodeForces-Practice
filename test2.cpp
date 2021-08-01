#include<bits/stdc++.h>
#define pb emplace_back
#define ll long long
#define mp make_pair
#define PI acos(-1)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll i,j,k,x,y,z,m,n,t,a,b,l,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        bool f=0;
        if(n & 1)
        {
            for(i=0; i<n; i+=2)
            {
                x=s[i]-'0';
                if(x & 1)
                    f=1;
            }
            if(f)
                cout<<1<<'\n';
            else
                cout<<2<<'\n';
        }
        else
        {
             for(i=1; i<n; i+=2)
            {
                x=s[i]-'0';
                if(x%2==0)
                    f=1;
            }
            if(f)
                cout<<2<<'\n';
            else
                cout<<1<<'\n';
        }
    }
}
