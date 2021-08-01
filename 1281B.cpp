#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,t,i,j,f,k,x,y;
    char s[10000],c[10000],tem;
    cin>>t;
    while(t--)
    {f = 0;k=0;y =0;
        cin>>s>>c;
        n1 = strlen(s);
        n2 = strlen(c);
        if(n1<=n2)
        {
            for(i=0;i<n1;i++)
            {
                if(s[i] != c[i])
                {
                    y = 1;
                    break;
                }
            }
            if(y == 1)
            for(i=0; i<n1; i++)
            {
                if(s[i]<c[i])
                {f = 1;
                    break;
                }
                else
                {x = 0;
                    if(s[i] == c[i])x=1;
                    for(j=i+1; j<n1; j++)
                    {
                        if(s[j]<c[i] ||(s[i]==c[i+1] && s[j]==c[i]))
                        {
                            tem = s[i];
                            s[i] = s[j];
                            s[j] = tem;
                            f = 1;break;
                        }
                    }
                }
                if(f == 1 || x!=1)break;
            }
            if(f == 1 || y == 0)cout<<s<<endl;
            else
                cout<<"---"<<endl;
        }
        else
        {
            for(i=0; i<n2; i++)
            {
                if(s[i]<c[i])
                {f = 1;
                    break;
                }
                else
                {
                    for(j=i+1; j<n1; j++)
                    {
                        if(s[j]<c[i])
                        {
                            tem = s[i];
                            s[i] = s[j];
                            s[j] = tem;
                            f = 1;break;
                        }
                    }
                }
                if(f == 1)break;
            }
            if(f == 1)cout<<s<<endl;
            else
                cout<<"---"<<endl;
        }
    }
    return 0;
}

