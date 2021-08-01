#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,f,x,y,k,ans;
    int a[100010];
    cin>>t;
    while(t--)
    {f = 0;k = 0;ans = 0;
        cin>>n>>x;
        for(long long i=0; i<n; i++ )
        {
            cin>>y;
            if(y>=x)
            {
                f+=(y-x);ans++;
            }
            else
            {
                a[k++] = y;
            }
        }
        sort(a,a+k);
        for(long long i=0; i<k; i++ )
        {
            if(f<=0)
                break;
            else
            {
                if(a[i]+f>=x)
                {
                    ans++;
                    f-=x-a[i];
                }
                else
                    break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}

