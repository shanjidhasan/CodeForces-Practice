#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,m,y,a,i,j,s,t,n;
    cin>>t;
    while(t--)
    {
        s = 0;m = 0;
        cin>>n;
        m = n;
        while(n>9)
        {
            x = n/10;
            s += x;
            n %= 10;//cout<<s<<endl<<n<<endl;
            n += x;
            //cout<<s<<endl<<n<<endl;
        }
        //cout<<m<<endl;
        cout<<m+s<<endl;

    }
    return 0;
}

