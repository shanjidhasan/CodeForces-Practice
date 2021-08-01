#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,x,a[2050] = {0},f,y,z;

    cin>>t;
    while(t--)
    {
        f = 0;
        memset(a, 0, sizeof(a));
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>x;
            if(x<=2048)
            {
                a[x]++;
            }
        }
        x = 2048;
        y = 2048;
        while(x>=1)
        {z = 0;

            if(a[x]>0)
            {
                z = min((a[x]),(y/x));
                y-=z*x;

            }
            //cout<<x<<" "<<y<<" "<<a[x]<<" "<<z<<endl;
            x/=2;
            if(y == 0)
            {
                f = 1;
                break;
            }
        }
        if(f == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

