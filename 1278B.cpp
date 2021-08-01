#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,t,n1,n2,i,j,k,l,m,n,f,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<b)
        {f=0;
            n = b-a;
            x = 1;i=1;
            while(x<n)
            {
                x+=++i;
                if(x == n)
                {   f =1;
                    break;
                }
            }
            if(f == 1)cout<<i<<endl;
            else if(n==2)cout<<3<<endl;
            else cout<<i<<endl;
        }
        else if(b<a)
        {f=0;
            n = a-b;
            x = 1;i=1;
            while(x<n)
            {
                x+=++i;
                if(x == n)
                {   f =1;
                    break;
                }
            }
            if(f == 1)cout<<i<<endl;
            else if(n==2)cout<<3<<endl;
            else cout<<i<<endl;

        }
        else
            cout<<0<<endl;
    }
    return 0;
}

