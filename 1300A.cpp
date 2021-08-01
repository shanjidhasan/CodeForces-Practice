#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n,a[110],x,sum,k;
    cin>>t;
    while(t--)
    {sum = 0;k=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
            if(x==0)k++;
        }
        sum+=k;
        if(sum==0)k++;
        cout<<k<<endl;
    }
    return 0;
}
