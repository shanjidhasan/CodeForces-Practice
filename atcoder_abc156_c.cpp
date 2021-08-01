#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,k=0,a[110],i;
    long long sum, min = LONG_LONG_MAX;
    cin>>n;
    r = n;
    for(i=0;i<n;i++)
    {
    //cout<<69<<endl;
        cin>>a[i];
    }
    sort(a,a+n);
    //cout<<69<<endl;
    for(i=a[0]; i<=a[n-1]; i++)
    {
        //cout<<69<<endl;
        sum = 0;
        for(int j=0; j<n; j++)
            sum += (a[j]-i)*(a[j]-i);
        if(min>sum)
            min = sum;
    }
    cout<<min<<endl;
    return 0;
}
