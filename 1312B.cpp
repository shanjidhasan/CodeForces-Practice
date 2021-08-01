#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a[110];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1;i<n;i+=2)
            cout<<a[i]<<" ";
        for(i=0;i<n;i+=2)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}

