#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,x,ans;
    cin>>t;
    while(t)
    {
        cin>>a>>b>>c;
        x = c/2;
        if(x<=b)
        {
            ans = x + x*2;
            b =b-x;
        }
        else
        {

            ans = b + b*2;
            b =0;
        }
        x = b/2;
        if(x<=a)
        {
            ans += x + x*2;
            a =a-x;
        }
        else
        {

            ans += a + a*2;
            a =0;
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
