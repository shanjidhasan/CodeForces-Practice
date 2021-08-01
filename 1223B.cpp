#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,f,j;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        f = 0;
        cin>>s1>>s2;
        n = s1.size();
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(s1[i] == s2[j])
                f = 1;
            }

        }
        if(f == 1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

