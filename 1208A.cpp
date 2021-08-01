#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,k=0,p,a,b,t;
    double ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>n;
        p = a^b;
        if(n%3==0)
            cout<<a<<endl;
        else if(n%3==1)
            cout<<b<<endl;
        else
            cout<<p<<endl;
    }
    return 0;
}



