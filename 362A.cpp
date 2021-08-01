#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x1,y1,x2,y2,f,i,j;
    cin>>t;
    string s[10],s1;
    while(t--)
    {f=0;
        for(i=0;i<8;i++)
            cin>>s[i];
        s1 = s[0] + s[1] + s[2] + s[3] + s[4] + s[5] + s[6] + s[7];
        for(i = 0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(s[i][j] == 'K' && f==0)
                {
                    x1 = i+1;
                    y1 = j+1;f = 1;
                }
                else if(s[i][j] == 'K' && f==1)
                {
                    x2 = i+1;
                    y2 = j+1;
                }
            }
        }
        if(abs(x1-x2)%4==0 && abs(y1-y2)%4==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

