#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a == b)
            cout<<0<<endl;
        else if(a<b)
        {
            if((b-a)>10)
            {
                if((b-a)%10==0)
                    cout<<(b-a)/10<<endl;
                else
                    cout<<(b-a)/10+1<<endl;
            }
            else
                cout<<1<<endl;
        }
        else if(b<a)
        {
            if((a-b)>10)
            {
                if((a-b)%10==0)
                    cout<<(a-b)/10<<endl;
                else
                    cout<<(a-b)/10+1<<endl;
            }
            else
                cout<<1<<endl;
        }
    }
    return 0;
}
