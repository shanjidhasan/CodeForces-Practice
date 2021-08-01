#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[105];
    int a,b,c,t,x,min,num1,num2,i,r,p,s,ur,up,us,n;
    cin>>t;
    while(t)
    {
        r = 0;
        ur = 0;
        p = 0;
        up = 0;
        s = 0;
        us = 0;
        cin>>n;
        cin>>a>>b>>c;
        cin>>s1;
        for(i=0; i<strlen(s1); i++)
        {
            if(s1[i]=='R')
                p++;
            else if(s1[i]=='P')
                s++;
            else
                r++;
        }
        r = (r<a) ? r : a;
        p = (p<b) ? p : b;
        s = (s<c) ? s : c;
        //cout<<r<<" "<<p<<" "<<s<<" "<<endl<<(r+p+s)<<" "<<(n/2);
        if((r+p+s)>=(n/2+1))
        {
            cout<<"YES"<<endl;
            for(i=0; i<strlen(s1); i++)
            {
                if(ur<r && s1[i] == 'S')
                {
                    ur++;
                    cout<<'R';
                }
               if(up<p && s1[i] == 'R')
                {
                    up++;
                    cout<<'P';
                }
               if(us<s && s1[i] == 'P')
                {
                    us++;
                    cout<<'S';
                }
                else
                    cout<<s1[i];
            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
        t--;
    }
    return 0;
}

