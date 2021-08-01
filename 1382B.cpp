#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,z[1010],x,t,a,b,ans1,ans2,f;
    cin>>t;
    while(t--)
    {f = 0;
        cin>>a;
        for(i=0;i<a;i++)
        {
            cin>>x;
            if(x != 1)
                f = 1;
            if(x>1 && f == 0)
                ans1 = i+1;


        }
        if(f == 0)
        {
            if(a%2 == 0)
                cout<<"SECOND"<<endl;
            else
                cout<<"FIRST"<<endl;
        }
        else
        {
            if(ans1%2 == 0)
                cout<<"SECOND"<<endl;
            else
                cout<<"FIRST"<<endl;
        }
    }

    return 0;
}

