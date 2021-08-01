#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,k=0,p,j;
    char s[100010];
    cin>>n;
    for(j=1;j<=n;j++)
    {k=0;
        cin>>s;
        p = strlen(s);
        for(i=0;i<p;i++)
        {
            if(s[i] == s[i+1] && s[i] != '?' && s[i+1] != '?')
                {k=1;
                    break;
                }
            if(s[i] == '?')
            {
                if(i==0)
                {
                    if(s[i+1] != 'a')
                        s[i] = 'a';
                    else if(s[i+1] != 'b')
                        s[i] = 'b';
                    else if(s[i+1] != 'c')
                        s[i] = 'c';
                }
                else
                if(s[i-1]=='a' && s[i+1] != 'b')
                    s[i] = 'b';
                else if(s[i-1]=='a' && s[i+1] != 'c')
                    s[i] = 'c';
                else if(s[i-1]=='b' && s[i+1] != 'a')
                    s[i] = 'a';
                else if(s[i-1]=='b' && s[i+1] != 'c')
                    s[i] = 'c';
                else if(s[i-1]=='c' && s[i+1] != 'a')
                    s[i] = 'a';
                else if(s[i-1]=='c' && s[i+1] != 'b')
                    s[i] = 'b';
            }
        }
        if(k==1)
            cout<<-1<<endl;
        else
        cout<<s<<endl;
    }

    return 0;
}



