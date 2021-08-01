#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[200010],b,c,i,j,h,sum = 0;
    cin>>h>>n;
    for(i=0;i<h;i++)
    {
        cin>>a[i];
    }
    sort(a,a+h);
    for(i=0;i<h-n;i++)
        sum+=a[i];
    cout<<sum<<endl;
    return 0;
}


