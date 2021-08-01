#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a[1010][3],b,c,n,i,j,x,y,m,p,tem,f;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>p;
        for(i=0;i<p;i++)
            cin>>a[i][0]>>a[i][1];
        for(i=0;i<p;i++)
        {
            for(j=i;j<p;j++)
            {
                if(a[i][0]>a[j][0])
                {
                    tem = a[i][0];
                    a[i][0] = a[j][0];
                    a[j][0] = tem;
                    tem = a[i][1];
                    a[i][1] = a[j][1];
                    a[j][1] = tem;
                }
            }
        }
        for(i=0;i<p;i++)
        {
            for(j=i;j<p;j++)
            {
                if(a[i][1]>a[j][1])
                {
                    tem = a[i][0];
                    a[i][0] = a[j][0];
                    a[j][0] = tem;
                    tem = a[i][1];
                    a[i][1] = a[j][1];
                    a[j][1] = tem;
                }
            }
        }x = 0;y = 0;f = 0;
        s.clear();
        for(i=0;i<p;i++)
        {
            if(x <= a[i][0] && y <= a[i][1])
            {
                m = a[i][0] - x;
                n = a[i][1] - y;
                for(j=0;j<m;j++)
                    s = s+'R';
                for(j=0;j<n;j++)
                    s = s+'U';
                    x = x+m;
                    y = y+n;
            }
            else
            {
                f = 1;
                break;
            }
        }
        if(f == 0)
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
