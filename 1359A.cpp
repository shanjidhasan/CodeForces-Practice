#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,m,k,n,a[100],sum=0;
    cin>>t;
    while(t--)
    {sum=0;
        cin>>n>>m>>k;
        for(i=0;i<k;i++)
            a[i]=0;
        if(n/k>m)
        {
            a[0] = m;
            m-=m;
        }
        else
        {
            a[0] = n/k;
            m-=n/k;
        }
        while(m!=0)
        for(i=1;i<k;i++)
        {
            if(m==0)
                break;
            a[i]++;
            m--;
        }
        for(i=1;i<k;i++)
        {
            if(sum<a[i])
                sum = a[i];
        }

        cout<<a[0]-sum<<endl;
    }
    return 0;
}
