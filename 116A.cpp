#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000][2],i,b[1000],x=0,max=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i][1]>>a[i][2];
    for(i=0;i<n;i++)
    {
        x = x-a[i][1];
        x = x+a[i][2];
        if(max<x)
            max = x;
    }
    cout<<max<<endl;
    return 0;
}
