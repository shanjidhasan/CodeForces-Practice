#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        int f= 0,ans= 0;
        string s;
        cin>>n>>s;
        for (i=0; i<n ; i++)
        {
            if(s[i] == '(')
                f++;
            else
            {
                f--;
            }
            if(ans>f)
                ans=f;
        }
        if(ans<0)
        {
            for (i=0 ; i<abs(ans) ; i++)
                s='(' + s;
        }
        f = 0;
        for(i=0 ; i<n ; i++)
        {
            if (s[i] == '(')
                f++;
            else
            {
                f--;
            }
        }
        if(f!=0)
        {
            for(i=0 ; i<f ; i++)
                s= s + ')';
        }
        cout<<abs(ans)<<endl;
    }
    return 0;
}
