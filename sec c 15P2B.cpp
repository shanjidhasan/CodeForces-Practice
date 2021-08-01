#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,f;
    char s[10010],t[10010];
        cin>>s;
        n = strlen(s);
        k = 0;
        for(i=0;i<n;i++)
        {
            if(s[i]==s[i+1])
            {
                k++;
                if(k>=7)
                {
                    f = 1;
                    break;
                }
            }
            else
                k = 0;
        }
        if(f == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    return 0;
}

