#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,x,y;
    char a[200010],t[200010];
    cin>>a>>t;
    strrev(a);
    strrev(t);
    x = strlen(a);
    y = strlen(t);
    if(x<=y)
    {
        for(i=0; i<x; i++)
        {
            if(a[i]==t[i])
            {
                j++;
                continue;
            }
            break;
        }
        cout<<((x-j)+(y-j))<<endl;
    }
    else
    {
        for(i=0; i<y; i++)
        {
            if(a[i]==t[i])
            {
                j++;
                continue;
            }
            break;
        }
        cout<<((x-j)+(y-j))<<endl;
    }
    return 0;
}
