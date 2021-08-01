#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,t,n,d,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        cin>>x;
        for(i=1;i<n;i++)
        {
            cin>>y;
            if(i*y<=d)
            {
                x+=y;
                d-=i*y;
            }
            else if(d == 0)
            {
                continue;
            }
            else
            {
                z = d/i;
                x+=z;
                d = d-z*i;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
