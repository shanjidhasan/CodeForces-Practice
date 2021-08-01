#include<bits/stdc++.h>
using namespace std;
int Equal(long long int a1[], long long int a2[], long long int x)
{
    sort(a1, a1 + x);
    sort(a2, a2 + x);
    for (int i = 0; i < x; i++)
        if (a1[i] != a2[i])
            return 0;
    return 1;
}
int main()
{
    long long int a[2020],b[2020],n,i,j,k,l,m,p,q,f;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>b[i];
    }
    for(i=0; i<=m; i++)
    {
        for(j=0; j<n; j++)
        {
            a[j] = (a[j]+i)%m;
        }
        if(Equal(a,b,n)==1)
        {
            cout<<i<<endl;break;
        }
    }
    return 0;
}

