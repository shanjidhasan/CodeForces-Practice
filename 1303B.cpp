#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,g,b,m,f,k,l,ans,x,y;
    long long int t;
    cin>>t;
    while(t--)
    {x = 0;y=0;
        cin>>n>>g>>b;m = n;
        if(n<=g)ans = n;

        else
        {
            n = ceil(n/2.0);
            f = 1;i=1;
            while(1)
            {
                if(f== 1)
                {
                    x+=g;
                    f = 0;i+=g;continue;
                }
                else if(f == 0)
                {
                    y+=b;
                    f = 1;i+=b;continue;
                }
                if(x>=n)break;
            }
            if(x+y<m)
                ans = m;
            else
                ans = x+y;
        }
        cout<<ans<<endl;
    }
    return 0;
}

