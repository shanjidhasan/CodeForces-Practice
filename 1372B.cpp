#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,mini,x,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2 == 0)
            cout<<n/2<< " " << n/2 <<endl;
        else if(n%3 == 0)
            cout<<n/3<<" "<<2*n/3<<endl;
        else
            cout<<1<<" "<<n-1<<endl;
    }

    return 0;
}

