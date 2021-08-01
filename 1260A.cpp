#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c,sum,i,j,x,ans,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>c>>sum;
            x = sum/c;
            y = sum%c;
            ans = (c-y)*x*x + y*(x+1)*(x+1);
            cout<<ans<<endl;
    }
    return 0;
}
