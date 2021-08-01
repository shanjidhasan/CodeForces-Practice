#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,t,n,d,x,y,z,a,max = LONG_LONG_MIN;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>y;
            if(max<y)max = y;
        }
        if(max>x)
            cout<<2<<endl;
        else if(max == x)
            cout<<1<<endl;
        else
            cout<<ceil(1.0*x/max)<<endl;
    }
    return 0;
}

