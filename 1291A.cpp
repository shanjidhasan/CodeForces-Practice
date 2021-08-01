#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,n,x,y,pos;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        x = 0;
        y = 0;
        pos = -1;
        for(i=0; i<n; i++)
        {
            if((s[i]-'0')%2==0)
                x++;
            else
            {
                y++;
                if(pos == -1)
                    pos = i;
            }
        }
        if((x == 0 && y == 0)||(x!=0 && y == 1) || (x!=0 && y==0) || (x == 0 && y == 1))
        {
            cout<<"-1"<<endl;
            continue;
        }
        if(y%2 == 0 && (s[n-1]-'0')%2!= 0)
        {
            if(s.size()!=0)
                cout<<s<<endl;
            else
                cout<<"-1"<<endl;
            continue;
        }
        if(y%2==0 && (s[n-1]-'0')%2 == 0)
        {
            while((s[s.size()-1]-'0')%2 == 0)
            {
                s.erase(s.begin() + n-1);
                n = s.size();
            }
            if(s.size()!=0)
                cout<<s<<endl;
            else
                cout<<"-1"<<endl;
            continue;
        }
        if(y%2 != 0 && (s[n-1]-'0')%2!= 0)
        {
            s.erase(s.begin() + pos+1);
            if(s.size()!=0)
                cout<<s<<endl;
            else
                cout<<"-1"<<endl;
            continue;
        }
        if(y%2 != 0 && (s[n-1]-'0')%2 == 0)
        {
            s.erase(s.begin() + pos+1);
            while((s[s.size()-1]-'0')%2 == 0)
            {
                s.erase(s.begin() + n-1);
                n = s.size();
            }
            if(s.size()!=0)
                cout<<s<<endl;
            else
                cout<<"-1"<<endl;
            continue;
        }
    }
    return 0;
}
