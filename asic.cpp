#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int t,a,b,n,s,x,y,z;
    cin>>t;
    while(t)
    {
        cin>>a>>b>>n>>s;
        if(a*n>=s)
        {
            x = s/n;
            y = x*n;
            z = y+b;
            if(z>=s && x != 0)
                cout<<"YES"<<endl;
            else if(z>=s && x==0)
            {
                if(b<=s)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else if(z < s)
                cout<<"NO"<<endl;
        }
        else
        {
            x = a*n;
            y = x + b;
            if(y>=s)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;

        }
        t--;
    }
    return 0;
}
