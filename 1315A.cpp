#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,x,y,ans1,ans2,ans3,ans4;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y;
        ans1 = a*y;
        ans2 = b*(a-x-1);
        ans3 = b*x;
        ans4 = a*(b-y-1);
        if(ans1>=ans2 && ans1 >= ans3 && ans1 >= ans4)
        {
            cout<<ans1<<endl;
        }
        else if(ans2>=ans1 && ans2 >= ans3 && ans2 >= ans4)
        {
            cout<<ans2<<endl;
        }
        else if(ans3>=ans2 && ans3 >= ans1 && ans3 >= ans4)
        {
            cout<<ans3<<endl;
        }
        else
        {
            cout<<ans4<<endl;
        }
    }
    return 0;
}
