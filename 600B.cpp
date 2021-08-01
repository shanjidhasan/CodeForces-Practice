#include<bits/stdc++.h>
using namespace std;int mid;
int main()
{
    int i,j,n,m,l,r,t,f,min,max;
    int b[200010];
    vector <int> v;
    cin>>n>>m;
    //memset(b,0,m);
    for(i=0;i<n;i++)
    {
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    for(i=0;i<m;i++)
    {
        cin>>t;
        j = lower_bound(v.begin(),v.end(),t+1)-v.begin();
        b[i] = j;
    }
    for(i=0;i<m;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}


