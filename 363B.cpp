#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,i,a[200010],y,max=0,sum=0;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sum = 0;
    for(i=0; i<k; i++)
    {
        sum+=a[i];
        //cout<<sum<<endl;
    }

    max = sum;
    y = 0;
    for(i = 0; i < n-k; i++)
    {
        //cout<<sum<<endl;
       // cout<<i<<" "<<i+k<<endl;
        sum-=a[i];
        sum+=a[i+k];
        if(max>sum)
        {
            max = sum;
            y = i+1;
        }
    }
    cout<<y+1<<endl;
    return 0;
}

