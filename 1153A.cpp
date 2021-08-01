#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,ans1,ans2=LONG_LONG_MAX,s,d,i=0;
    cin>>n>>t;
    while(n--)
    {
        cin>>s>>d;
        while(s<t)
            s+=d;
        i++;
        if(s < ans2)
        {
            ans1 = i;
            ans2 = s;
        }
    }
    cout<<ans1<<endl;
    return 0;
}

