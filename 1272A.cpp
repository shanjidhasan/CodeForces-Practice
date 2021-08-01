#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[5],i,j,t,ans,tem;
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a, a + 3);
        //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
        if(a[0] == a[1] && a[2]!=a[1])
        {
            a[0]++;a[1]++;i=0;
            if(a[2]!=a[1])
                a[2]--;
        }
        else if(a[1]==a[2] && a[0]!=a[1])
        {
            a[1]--;a[2]--;i=0;
            if(a[0]!=a[1])
                a[0]++;
        }
        else
        {i=1;
            if(a[0]!=a[1] || a[0]!=a[2] && a[0]+1<a[1])
                a[0]++;
            if(a[2]!=a[1] || a[2]!=a[0])
                a[2]--;
            if(a[0]!=a[1]&&a[1]!=a[2])
                a[1]--;
        }

       //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
                ans = ((a[1]-a[0])+(a[2]-a[0])+(a[2]-a[1]));
            cout<<ans<<endl;

    }
    return 0;
}
