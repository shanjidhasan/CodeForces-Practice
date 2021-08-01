#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[110],b[110],t,n1,n2,i,j,k,l,m,n,f;
    char p[1000],h[1000];
    cin>>t;
    while(t--)
    {
        cin>>p>>h;
        n1 = strlen(p);
        n2 = strlen(h);
        if(n1<=n2)
        {
            for(i=0; i<26; i++)
                a[i]=0;
            for(i=0; i<n1; i++)
            {
                a[p[i]-97]++;
            }
            //for(i=0; i<26; i++)
                //cout<<a[i];
            for(i=0; i<=n2-n1; i++)
            {
                f = 1;
                for(k=0; k<26; k++)
                    b[k]=0;
                for(j=i; j<i+n1; j++)
                {
                    //cout<<h[j];
                    b[h[j]-97]++;
                }
                //cout<<endl;
                //for(n=0; n<26; n++)
                //cout<<b[i];
                //cout<<"\t";
                for(m=0; m<26; m++)
                {
                    if(a[m]!=b[m])
                    {
                        f = 0;
                        break;
                    }
                }
                if(f==1)
                    break;
            }
            if(f==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
