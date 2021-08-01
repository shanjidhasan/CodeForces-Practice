#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,ans;
    cin>>x;
    if(x%5==0)ans = x/5;
    else ans = x/5+1;
    cout<<ans<<endl;
    return 0;
}
