#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,j,t,ans=0,tem,f,l,p;
    char s[200010],a[30];
    cin>>n>>l;
    cin>>s;
    for(i=0;i<l;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(k = 0 ; k < n-i ; k++)
        {f = 1;
            for(j = k; j < k+i ; j++)
            {
                for(p = 0 ; p < l ; p++)
                {
                    if(s[j] == a[p])
                    {
                        f = 0;
                        break;
                    }
                }
                if(f == 0)
                    break;
            }
            if(f == 1)ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

