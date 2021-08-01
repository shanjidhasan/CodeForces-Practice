#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,ans;
    cin>>a>>b;
    if(a>=b)
        n = a-b;
    else
        n = b-a;
    if(n%2==0)
    {
        ans = 2*(n/2*(n/2+1)/2);
    }
    else
    {
        ans = (n/2*(n/2+1)/2) + ((n/2+1)*((n/2+1)+1)/2);
    }
    cout<<ans<<endl;
    return 0;
}
