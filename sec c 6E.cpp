#include<iostream>
using namespace std;
main()
{
    int q;
    cin>>q;
    while (q--)
    {
        unsigned long long n,m,i,a,b,sum=0;
        cin>>n>>m;
        for (i=m; i<=n; i+=m)
            sum+=i%10;
        cout<<sum<<endl;
    }
}
