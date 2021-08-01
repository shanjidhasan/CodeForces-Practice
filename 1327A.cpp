#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,t,no;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%2==0)
            no = a/2;
        else
            no = a/2+1;
        if((a%2==0 && b%2==0)||((a%2!=0 && b%2!=0))&&(b<=no/2))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
