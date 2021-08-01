#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,a,i,j,sum,t,n;
    cin>>t;
    while(t--)
    {
        x = 0;
        y = 0;
        sum = 0;
        cin>>n;
        while(n--)
        {
            cin>>a;
            if(a%2==0)
                x++;
            else
                y++;
            sum+=a;
        }
        if(sum%2 != 0)
            cout<<"YES"<<endl;
        else
        {
            if(x == 0 && y%2 != 0)
                cout<<"YES"<<endl;
            else if((x == 0 && y%2 == 0)||(y == 0))
                cout<<"NO"<<endl;
            else if(x != 0 && y != 0)
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
