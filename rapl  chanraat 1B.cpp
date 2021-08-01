#include<iostream>
using namespace std;
int main()
{
    int n,c,a,m,i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        a=(a-i+n)/n;
            m=a;
            c=i;
    }
    cout<<c;
}
