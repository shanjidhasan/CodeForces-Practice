#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,f;
    string s;
    cin>>s;
    i=0;
    f=0;
    while(i<s.size())
    {
        if(s[i] != 'W' || s[i+1] != 'U' || s[i+2] != 'B') f = 1;
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {

            if(f==1)
            {
                s[i+2] = ' ';
                s.erase(i,2);
                continue;
            }
            else
            {
                s.erase(i,3);
                continue;
            }
        }//cout<<s<<endl;
        i++;
    }//cout<<s<<endl;
    i=0;
    while(i<s.size())
    {
        if(s[i] == ' ' && s[i+1] == ' ')
        {
            s.erase(i,1);continue;
        }
        i++;
    }
    cout<<s<<endl;
    return 0;
}
