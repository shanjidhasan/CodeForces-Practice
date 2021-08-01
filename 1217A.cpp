#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,z,i,c,p;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x>>y>>z;
        if((x-y)+z<0)
            cout<<0<<endl;
        else
            cout<<(z-max((y+z-x+2)/2,0)+1)<<endl;
    }
    return 0;
}
