#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
    while(n>0)
    {
        if(n%3==2)
            return 0;
        n=n/3;
    }
    return 1;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(n = n; !func(n); n++);
        cout<<n<<endl;
    }
    return 0;
}
