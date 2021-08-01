#include<bits/stdc++.h>
using namespace std;
long long int div(long long int x)
{
    if(x%2==0)
        return x/2;
    else
        return x/2+1;
}
int main()
{
    long long int n,t,q,a[5],r,g,b,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>r>>g>>b;
        a[0] = r ; a[1] = g ; a[2] = b;
        sort(a,a+3);
        if(a[0]+a[1]+1<a[2])
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
