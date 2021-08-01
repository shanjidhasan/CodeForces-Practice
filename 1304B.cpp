#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,x[110],y[110],a,b,n,m,k,p=-1,l;
    string s[110],s1;
    cin>>n>>m;
    k=0;
    for(i=0; i<n; i++)
    {
        cin>>s[i];
        s1 = s[i];
        reverse(s1.begin(),s1.end());
        if(s1 == s[i])
            {
                p = i;
            }
    }
    l=0;
    for(i=0; i<n-1; i++)
    {
        s1 = s[i];
        reverse(s1.begin(),s1.end());
        if(s1 != s[i])
        {
            for(j=i+1; j<n; j++)
            {
                if(s1 == s[j])
                {
                    //cout<<i<<" "<<j<<" "<<l<<endl;
                    x[l] = i;
                    y[l++] = j;
                }
            }
        }
    }
    //cout<<p<<endl;
    if(p == -1 && k == 0 && l == 0)
        cout<<0<<endl;
    else
    {
        //cout<<l<<" "<<p<<" "<<s[p]<<endl;
        if(p==-1)
        cout<<l*m+l*m<<endl;
        else
            cout<<l*m+l*m+m<<endl;
        for(i=0; i<l; i++)
            cout<<s[x[i]];
            if(p!=-1)
        cout<<s[p];
        for(i=l-1; i>=0; i--)
            cout<<s[y[i]];

    }
    return 0;
}


