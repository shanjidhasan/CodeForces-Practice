#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,m,n,x,y,sum,i,j,a[105],b[105];
    cin>>t;
    while(t--)
    {sum = 0;
        cin>>n>>m;
        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<n;i++)
            cin>>b[i];

        sort(a,a+n);
        sort(b,b+n,greater<long long>());
        for(i=0;i<n;i++)
        {
            if(m==0)break;
            if(a[i]<b[i])
            {
                a[i]=b[i];
                m--;
            }
        }
        for(i=0;i<n;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}

