#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,a,b,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>=b)
            y = a - b;
        else if(b>a)
            y = b - a;
        n = y/5;
        if(y%5==1)
            n+=1;
        else if(y%5==2)
            n+=1;
        else if(y%5==3)
            n+=2;
        else if(y%5==4)
            n+=2;
        cout<<n<<endl;
    }
    return 0;
}
