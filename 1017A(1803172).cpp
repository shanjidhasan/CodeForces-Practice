#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,tom=0,t,i = 1,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    tom = a + b + c + d;
    t = n-1;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        sum = a + b + c + d;
        if(tom<sum)
        {
            i++;
        }
    }
    cout<<i<<endl;
    return 0;
}
