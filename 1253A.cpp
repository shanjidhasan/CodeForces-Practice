#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,l,r,k,n,f,i,j=0;
    char arr[25][5];
    cin>>t;
    while(t--)
    {
        l = 0;
        r = 0;
        f = 0;
        cin>>n;
        int a[n+5],b[n+5];
        for(i = 0; i<n; i++)
            cin>>a[i];
        for(i = 0; i<n; i++)
            cin>>b[i];
        for(i=0 ; i<n ; i++)
        {
            if(a[i] != b[i])
            {
                if(a[i]>b[i])
                {
                    f = 1;
                    break;
                }
                l = i;
                k = b[i] - a[i];
                break;
            }
        }
        if(f == 1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(i = l; i<n ; i++)
        {
            if(a[i]!=b[i])
            {
                a[i]+=k;
            }
            else
                break;
        }
        for(i = l; i<n; i++)
        {
            if(a[i] != b[i])
            {
                f = 1;
                break;
            }
        }
        //for(i = 0; i<n; i++)cout<<a[i]<<" "<<b[i]<<endl;
        if(f == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
