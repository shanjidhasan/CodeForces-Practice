#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,r,b,n1;
    string arr;
    cin>>t;
    while(t--)
    {
        cin>>n>>arr;
        n1 = n;
        r = 0;
        b = 0;
        if(n%2==1)
        {
            for(int i = 0 ; i < n ; i += 2)
            {
                if((arr[i]-'0') % 2 == 1)
                {
                    r = 1;
                }
            }
            if(r == 1)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else
        {
            for(int i = 1 ; i < n ; i += 2)
            {
                if((arr[i]-'0') % 2 == 0)
                {
                    r = 1;
                }
            }
            if(r == 1)
                cout<<2<<endl;
            else
                cout<<1<<endl;
        }
    }
    return 0;
}
