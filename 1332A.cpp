#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,c,d,x,y,x1,y1,x2,y2,X,Y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
        if((x - x1 == 0 && a != 0) || (y-y2 == 0 && d!=0))
           {
               cout<<"NO\n";
               continue;
           }
        X = b-a;
        Y = d-c;
        x += X;
        y += Y;
        if(x>=x1 && x<= x2 && y>=y1 && y<=y2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

