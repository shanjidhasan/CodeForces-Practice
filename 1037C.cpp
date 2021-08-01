#include<iostream>
using namespace std;
int main()
{
    long long i,n,mov=0;
    string a,b;
    cin>>n;
    cin>>a;
    cin>>b;
    for(i=0; i<n; i++)
        if(a[i]!=b[i])
        {
            if(i<n-1&&a[i]==b[i+1]&&b[i]==a[i+1])
                i++;
            mov++;
        }
    cout<<mov;
    return 0;
}
