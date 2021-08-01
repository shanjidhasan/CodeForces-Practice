#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long int n,x,i,j,l=0,r=0,ans;
    char s[100010];
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        if(s[i] == 'L')
            l++;
        if(s[i] == 'R')
            r++;
    }
    ans = r+l+1;
    cout<<ans<<endl;
    return 0;
}
