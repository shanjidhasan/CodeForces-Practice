#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long i,h=0,e=0,l=0,r=0,n,sum=0;
    cin>>n;
    int a[n+2];
    for(i=0;i<n;i++)
    {
        cin>>a[i];sum+=a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        l+=a[i];
        sum-=a[i];
        if(l>sum)break;
    }
        cout<<n - i<<endl;
    return 0;
}

