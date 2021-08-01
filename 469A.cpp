#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,p,q,i,n,x;
    set<int> v;
        cin>>n>>p;
        for(i=0; i<p; i++)
        {
            cin>>x;
            v.insert(x);
        }
        cin>>q;
        for(i=0; i<q; i++)
        {
            cin>>x;
            v.insert(x);
        }
        if(n==v.size())
            cout<<"I become the guy."<<endl;
        else
            cout<<"Oh, my keyboard!"<<endl;
    return 0;
}

