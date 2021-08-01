#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,a,b,m,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            if(2*b<a)
                cout<<a*a<<endl;
            else
                cout<<4*b*b<<endl;
        }
        else if(a<b)
        {
            if(2*a>b)
                cout<<4*a*a<<endl;
            else
                cout<<b*b<<endl;
        }
        else
            cout<<4*a*b<<endl;
    }
    return 0;
}
