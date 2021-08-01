#include<bits/stdc++.h>
using namespace std;
int main()
{
    long  t,n,x,r,n1,y,a,b,f;
    long long  arr[1010];
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        a = 0;
        b = 0;
        f = 0;
        for(long long i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
            if(arr[i]<x)
            {
                a += x - arr[i];
                f = 1;
            }
            else if(arr[i]>x)
            {
                b += arr[i] - x;
                f = 1;
            }
        }
        if(f == 0)
            cout<<0<<endl;
        else if(a == b)
            cout<<1<<endl;
        else
            cout<<2<<endl;

    }
    return 0;
}

