#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,p,q,i,n,x;
        cin>>n>>t>>p;
    if((n==t && t != p) || (t == p && n!=p) || (n==p && t!=p))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}


