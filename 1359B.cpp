#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,m,k,n,x,y,sum=0,sum1,sum2;
    string s;
    cin>>t;
    while(t--)
    {sum = 0;
     sum1 = 0;
     sum2 = 0;
        cin>>n>>m>>x>>y;
        for(i=0;i<n;i++)
        {
            cin>>s;
            for(j=0;j<s.size();j++)
            {
                if(s[j]=='.')
                {
                    sum1 = sum1+=x;
                    if(j == s.size()-1)
                        sum += x;
                    else if(s[j] == '.' && s[j+1] == '.')
                    {
                        sum += y;
                        j++;
                        sum2+=y;
                        sum1+=x;
                    }
                    else if(s[j] == '.' && s[j+1] != '.')
                        sum += x;
                }
            }
        }
        if(sum<sum1)
                    cout<<sum<<endl;
        else
                    cout<<sum1<<endl;
    }
    return 0;
}

