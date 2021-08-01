#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,i,j,h,sum = 0;
    cin>>h>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
    }
    if(sum>=h)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}

