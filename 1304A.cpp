#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,x,y,a,b,s1,s2;
    cin>>t;
    while(t--)
    {i=0;
        cin>>x>>y>>a>>b;

       // cout<<s1<<" "<<s2<<" "<<s1/a<<endl;
        if((y-x)%(a+b) == 0)
        {
            cout<<(y-x)/(a+b)<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}

