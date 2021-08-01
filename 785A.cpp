#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    char s[20];
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s[0]=='T')i+=4;
        else if(s[0]=='C')i+=6;
        else if(s[0]=='O')i+=8;
        else if(s[0]=='D')i+=12;
        else if(s[0]=='I')i+=20;
    }
    cout<<i<<endl;
    return 0;
}
