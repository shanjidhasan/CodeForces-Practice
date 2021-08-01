#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,a[100010],c[100010],d[100010],ans,x,flagC,flagD;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int j = 0;
        int l = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>x;
            if(i==0)
            {
                c[j++] = x;
                a[i] = 0;
            }
            else
            {
                flagC = 0;
                for(int p = 0 ; p < j ; p++)
                {
                    if(c[p] + x == k)
                    {
                        flagC++;
                    }
                }
                flagD = 0;
                for(int p = 0 ; p < l ; p++)
                {
                    if(d[p] + x == k)
                    {
                        flagD++;
                    }
                }
                if(flagC<flagD)
                {
                    c[j++] = x;
                    a[i] = 0;
                }
                else
                {
                    d[l++] = x;
                    a[i] = 1;
                }
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

