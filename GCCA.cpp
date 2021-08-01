#include<bits/stdc++.h>
using namespace std;

int fibonacci(long long int n)
{
    int fib[n+1];

    fib[0]=0;
    fib[1]=1;

    for(int i=2;i<=n;i++)
        fib[i]=fib[i-1]+fib[i-2];

    return fib[n];
}

int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t){
    cin>>n;
    cout<<fibonacci(n)<<endl;
    t--;}
    return 0;
}
