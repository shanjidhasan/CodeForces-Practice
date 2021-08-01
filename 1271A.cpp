#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,x,y,z,ans;
    cin>>a>>b>>c>>d>>e>>f;
    if(f>=e)
    {
        if(b<=c && b<=d)
        {
            x = b;
            c -= b;
            d -= b;b = 0;
        }
        else if(c<=b && c<=d)
        {
            x = c;
            b -= c;
            d -= c;c = 0;
        }
        else if(d<=c && d<=b)
        {
            x = d;
            b -= d;
            c -= d; d = 0;
        }

        if(d<=a)
        {
            y = d;
        }
        else
        {
            y = a;
        }
        //cout<<x<<" "<<y<<" "<<f<<" "<<e<<endl;
        ans = x*f+y*e;
    }
    else
    {
        if(d<=a)
        {
            y = d;
            d = 0;
        }
        else
        {
            y = a;
            d -= a;
            a = 0;
        }
        if(b<=c && b<=d)
        {
            x = b;
            c -= b;
            d -= b;b = 0;
        }
        else if(c<=b && c<=d)
        {
            x = c;
            b -= c;
            d -= c;c = 0;
        }
        else if(d<=c && d<=b)
        {
            x = d;
            b -= d;
            c -= d; d = 0;
        }//cout<<x<<" "<<y<<" "<<f<<" "<<e<<endl;
        ans = x*f+y*e;
    }
    cout<<ans<<endl;
    return 0;
}
