#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,f,j,ans,x,y,z;
    cin>>t;
    while(t--)
    {
        ans = 0;
        cin>>n;
        int ar[n+5];
        set<int>v;
        set<int>::iterator it;
        memset(ar,0,sizeof(ar));
        for(i=0; i<n; i++)
        {
            cin>>x;
            ar[x]++;
            if(ar[x]>1)
                v.insert(x);
        }
        if(v.size()==0 && n>1)
        {
            ans = 1;
        }
        else
        {
            for(it=v.begin(); it!=v.end(); it++)
            {
                y=*it;
                if(ar[y]-1>(n-ar[y]))
                    z = (n-ar[y])+1;
                else if(ar[y]-(n-ar[y]) == 1)
                    z = n-ar[y];
                else
                    z = ar[y];
                ans = max(ans,z);
            }
        }

        cout<<ans<<"\n";
        v.clear();
    }
    return 0;
}



