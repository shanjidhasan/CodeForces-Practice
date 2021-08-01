#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a,b,c,d,w,x,y,z,f;
    cin>>t;
    while(t--)
    {f = 0;
        cin>>n>>a>>b>>c>>d;
        w = a-b;
        x = a+b;
        y = c-d;
        z = c+d;
        if(n*w <= z && n*x >= y)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}



