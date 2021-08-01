#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ans,t,h,a,b,c,x,y,z,m,n,k1,k2,m1,m2,i;
    cin>>t;
    while(t--)
    {m1=0;m2=0;
        cin>>n>>k1>>k2;
        for(i=0;i<k1;i++)
        {
            cin>>a;
            if(m1<a)
                m1 = a;
        }
        for(i=0;i<k2;i++)
        {
            cin>>a;
            if(m2<a)
                m2 = a;
        }
        if(m1>m2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}


