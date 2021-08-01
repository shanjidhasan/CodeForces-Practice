#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,z[1010],x,t,a,b,ans1,ans2,f;
    cin>>t;
    while(t--)
    {f = 0;
        cin>>a>>b;
        for(i=0;i<a;i++)
        {
            cin>>z[i];
        }
        for(i=0;i<b;i++)
        {
            cin>>x;
            if(f == 0)
            for(j=0;j<a;j++)
            {
                if(x == z[j])
                {
                    f = 1;
                    ans1 = x;
                }
            }
        }
        if(f == 1)
            cout<<"YES"<<endl<<1<<" "<<ans1<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}
