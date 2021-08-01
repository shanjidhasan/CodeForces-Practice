#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,l=0,r=0,u=0,d=0,m,n,ans,i;
    string s;
    cin>>x>>s;
    for(i=0;i<x;i++)
    {
        if(s[i] == 'L') l++;
        else if(s[i] == 'R') r++;
        else if(s[i] == 'U') u++;
        else if(s[i] == 'D') d++;
    }
    //cout<<l<<" "<<r<<" "<<u<<" "<<d<<endl;
    m = min(l,r);
    n = min(u,d);
    cout<<2*m+2*n<<"\n";
    return 0;
}
