#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long i,h=0,e=0,l=0,o=0;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i] == 'h')
        {
            h = 1;
            break;
        }
    }
    for(;i<s.size();i++)
    {
        if(s[i] == 'e' && h == 1)
        {
            e = 1;
            break;
        }
    }
    for(;i<s.size();i++)
    {
        if(s[i] == 'l' && e == 1)
        {
            l += 1;
            if(l == 2)
            break;
        }
    }
    for(;i<s.size();i++)
    {
        if(s[i] == 'o' && l == 2)
        {
            o = 1;
            break;
        }
    }
    if(h == 1 && e == 1 && l == 2 && o == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
