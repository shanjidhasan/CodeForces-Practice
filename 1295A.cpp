#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,y,a[10] = {6,2,5,5,4,5,6,3,7,6},b[100010],c,x,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;

        x = n/6;
        for(i=0; i<x; i++)
            cout<<9;
        n = n - x*6;
        x = n/7;
        for(i=0; i<x; i++)
            cout<<8;
        n = n - x*7;
        x = n/3;
        for(i=0; i<x; i++)
            cout<<7;
        n = n - x*3;
        x = n/2;
        for(i=0; i<x; i++)
            cout<<1;
        n = n - x*2;
        cout<<endl;
    }
    return 0;
}

