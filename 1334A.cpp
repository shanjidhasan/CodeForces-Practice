#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,p1,c1,p2,c2,f;
    cin>>t;
    while(t--)
    {f = 0;
        cin>>n;
        cin>>p2>>c2;
        for(long long i=1; i<n; i++ )
        {
            cin>>p1>>c1;
            if(p1<c1)f = 1;
            if(p1<p2) f = 1;
            if(c1<c2) f = 1;
            p2 = p1;
            c2 = c1;
        }
        if(f == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
