#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    long long n,m,i,j,k,f = 0;
    n = s.size();
    for(i = 0; i < n ; i++)
    {
        if(s[i] != 'a')
            s1+=s[i];
    }
    m = s1.size();
    if(m%2!=0)
    {
        cout<<":(\n";
        return 0;
    }
    for(i=0; i<m/2; i++)
    {
        if(s1[i]!=s1[m/2+i])
        {
            f = 1;
            break;
        }
    }
    if(f!=1)
    {j = m-1;
        for(i = n-1;i>=n-m/2;i--)
        {
            if(s[i]!=s1[j--])
            {
                f = 1;break;
            }
        }
    }
    if(f == 0)
    {
        for(i=0;i<n-m/2;i++)
            cout<<s[i];
        cout<<"\n";
    }
    else
        cout<<":(\n";
    return 0;
}
