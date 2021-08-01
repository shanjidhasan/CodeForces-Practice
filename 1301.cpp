#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,s2,s3,s4,sum1,sum2,k;
    string p,q,r;
    cin>>t;
    while(t--)
    {
        cin>>p>>q>>r;
        int s=r.size();
        s2=0;s3=0;s4=0;sum1=0;sum2=0,k=0;
        for(i=0;i<s;i++)
        {
            s2=p[i]-'0';
            s3=q[i]-'0';
            s4=r[i]-'0';
            if(s2!=s4)
            {
                p[i]=r[i];
            }
            else
            {
                q[i]=r[i];
            }
        }
         for(i=0;i<s;i++)
         {
             sum1=p[i]-'0';
             sum2=q[i]-'0';
             if(sum1!=sum2)
             {
                 k=10;
                 break;
             }
         }
         if(k==10)
         {
             cout<<"No"<<endl;
         }
         else
         {
             cout<<"Yes"<<endl;
         }

    }
}



