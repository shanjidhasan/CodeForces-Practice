#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,m,n,x,y,sum;
    cin>>t;
    while(t--)
    {sum = 0;
        cin>>n>>m;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        else if(n == 2)
        {
            cout<<m<<endl;
            continue;
        }
        x = n/2;
        y = m/x;
        if(m%x==0)
        {
            sum+=y*x*2;
        }
        else
        {
            sum+=y*(x-1)*2;
            sum+=(m-(y*(x-1)))*2;
        }
        cout<<sum<<endl;
    }

    return 0;
}
