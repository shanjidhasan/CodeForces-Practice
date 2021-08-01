#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,k=0;
    cin>>n;
    for(i=1;i<=n/2;i++)if(n%i==0)k++;
    cout<<k<<endl;
    return 0;
}

