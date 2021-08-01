#include<iostream>
using namespace std;
int main()
{
    int t,x,y,z;
    cin>>t;
    while(t)
    {
        cin>>x>>y>>z;
        if(x+y+z==180)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        t--;
    }
    return 0;
}

