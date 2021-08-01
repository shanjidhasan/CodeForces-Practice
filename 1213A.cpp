#include<bits/stdc++.h>
using namespace std;
int mid;
int main()
{
    int i,j,n,m,l,r,t,f,q,x;
    int b[200010];
    vector <int> v;
    cin>>n;
    //memset(b,0,m);
    for(i=0; i<n; i++)
    {
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());f = 0;r=0;
    for(i=0; i<n; i++)
    {
        if(v[i]%2 == 1)
            f++;
        else r++;
    }
    m = (f<r)?f:r;
    cout<<m<<endl;
    v.clear();
    return 0;
}

