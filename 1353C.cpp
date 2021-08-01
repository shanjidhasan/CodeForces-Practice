#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,m,n,x,y,sum,i,j,a[105],b[105];
    cin>>t;
    while(t--)
    {sum=0;
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }m=1;
        for(i=3;i<=n;i+=2)
        {
            sum+=((i*4)-4)*m;
            m++;
        }

        cout<<sum<<endl;
    }

    return 0;
}


