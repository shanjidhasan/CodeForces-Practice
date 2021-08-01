#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,ans1,ans2=LONG_LONG_MAX,s,d,i=0;
    cin>>n>>t;
    if(t == 0)
        ans1 = 1;
    else if(n == t)
        ans1 = 0;
    else
    {
        if((n-t)+1<=t)
            ans1 = n-t;
        else
            ans1 = t;

    }
    cout<<ans1<<endl;
    return 0;
}


