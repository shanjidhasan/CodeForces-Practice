#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,f;
    char s[10010],t[10010];
    cin>>l;
    while(l--)
    {
        f = 0;
        k = 0;
        cin>>n;
        cin>>s>>t;
        for(i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            {k++;
                for(j=0;j<n;j++)
                {
                    if(t[i] == t[j] && i!=j)
                    {
                        if(s[j]==s[i])
                        {
                            f = 1;
                        }
                    }
                }
            }
        }
        if(f == 1 && k < 3)
            cout<<"YES"<<endl;
        else if(k == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
