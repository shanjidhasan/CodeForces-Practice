#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans,h,a[200010],b[200010],c[100010],m,n,i,j,f,k,x;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        b[a[i]]=1;
    }
    k=0;
    for(i=1;i<=n;i++)
        if(b[i]==0)
        c[k++]=i;m=0;
    for(i=n-1;i>=0;i--)
    {
        if(a[i] == 0)
        {
            if(i+1 != c[m])
            {
                a[i] = c[m++];
            }
            else
            {
                h = c[m];
                c[m] = c[m+1];
                c[m+1] = h;
                a[i] = c[m++];
            }
        }
    }

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}


