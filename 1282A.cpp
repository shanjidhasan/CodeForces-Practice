#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ans,a,b,c,r,t,q,n,x,y;
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>c>>r;
        if(b>a)
        {
            t = b;
            b = a;
            a = t;
        }
        x = c+r;
        y = c-r;
        if(y<=b && x>=a)
            ans = 0;
        else{
        if((x<=a && x>=b)&&(y<=a && y>=b))
        {
            ans = (a-b)-2*r;
        }
        else if((x<=a && x>=b)||(y<=a && y>=b))
        {
            if(c>a&&c>b)
                r = a - (c - r);
            else if(c<a&&c<b)
                r = (c + r) - b;
            ans = (a-b)-r;
            //cout<<a-b<<endl;
        }
        else
            ans = a-b;}
        cout<<ans<<endl;
    }
    return 0;
}
