#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,f,z;
    long long n,ans;
    cin>>t;
    while(t--)
    {f = 0;ans = 0;
        cin>>n;
        if(n==1)
            f = 0;
        else
        while(n!=1)
        {
            ans++;
            if(n%6==0)
                n/=6;
            else if(n%6!=0)
            {
                n*=2;
                if(n%6!=0)
                    f = -1;
                if(f == -1)
                    break;
            }
            if(f==-1)
                break;
        }
        if(f != -1)
            cout<<ans<<endl;
        else
            cout<<f<<endl;
    }
    return 0;
}

