#include<bits/stdc++.h>
using namespace std;
int mid;
int main()
{
    int i,j,n,m,l,r,t,f,q,x;
    int b[200010];
    vector <int> v;
    cin>>q;
    while(q--)
    {
        cin>>n;
        //memset(b,0,m);
        for(i=0; i<n; i++)
        {
            cin>>t;
            v.push_back(t);
        }
        x = v[n-1];
        f = 0;
        for(i=n-1; i>=0; i--)
        {
            if(v[i]>x)
                f++;
            else
                x = v[i];
        }
        cout<<f<<endl;
        v.clear();
    }
    return 0;
}
