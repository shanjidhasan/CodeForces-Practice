#include<iostream>
using namespace std;
int main()
{
    long long int n,x;
    cin>>n;
    if(n!=0)
    n+=1;
    x=n;
    n%=2;
    if(n%2==0 || n==2)
        cout<<x/2<<endl;
    else
        cout<<x<<endl;
    return 0;
}
