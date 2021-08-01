#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tem,t1,i,j,x,y,a,b,f,n,m,t[110],l[110],h[110],k;
    cin>>t1;
    while(t1--)
    {
        cin>>n>>m;
        // cout<<s1<<" "<<s2<<" "<<s1/a<<endl;
        t[0] = 0;f = 0;
        for(i=1; i<=n; i++)
        {
            cin>>t[i]>>l[i]>>h[i];
        }
        for(i=1; i<=n; i++)
        {
            if(l[i]<0)
            {
                tem = l[i];
                l[i] = h[i];
                h[i] = tem;
            }k = 0;
           // cout<<i<<" "<<m<<" "<<(abs(l[i]-m)>abs(t[i]-t[i-1]))<<endl;
           if(t[i] == t[i-1])
           {
               if(l[i]>=l[i+1] && l[i]<=h[i+1])
                    k = 1;
               if(h[i]>=l[i+1] && h[i]<=h[i+1])
                    k = 1;
           }
            if((abs(l[i]-m)>abs(t[i]-t[i-1])) && k!=1)
            {
                cout<<"NO"<<endl;f = 1;
                break;
            }
            m = l[i];
            if(l[i+1]>m)
            {
                m==h[i];
            }
        }
        if(f==0)cout<<"YES"<<endl;
    }
    return 0;
}


