#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a[4],b,c,n;
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2]>>n;
        sort(a,a+3);
        n = n - ((a[2]-a[0])+(a[2]-a[1]));
        if(n%3 == 0 && n>=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
