#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,a1,b,b1,x,y,n,n1,n2;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y>>n;
        n1 = n;
        n2 = n;
        if((a-x)>=n)
        {
            a1 = a-n;
            n1 = 0;
        }
        else
        {
            a1 = a - (a-x);
            n1 -= (a-x);
        }
        if((b-y)>=n)
        {
            b1 = b-n;
            n2 = 0;
        }
        else
        {
            b1 = b - (b-y);
            n2 -= (b-y);
        }
        //cout<<a1<<" "<<b1<<" "<<n1<<" "<<n2<<"Fuck"<<endl;
        if(b1<=a1)
        {
            if(n2 == 0)
                cout<<b1*a<<endl;
            else
            {
                if((a-x)>=n2)
                {
                    a1 = a-n2;
                }
                else
                {
                    a1 = a - (a-x);
                }
                cout<<b1*a1<<endl;
            }
        }
        else
        {
            if(n1 == 0)
                cout<<a1*b<<endl;
            else
            {
                if((b-y)>=n1)
                {
                    b1 = b-n1;
                }
                else
                {
                    b1 = b - (b-y);
                }
                cout<<a1*b1<<endl;
            }
        }

    }
    return 0;
}

