#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10010],b[10010],i,tem,j,n,s;
    cin>>s>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tem = a[i];
                a[i] = a[j];
                a[j] = tem;
                tem = b[i];
                b[i] = b[j];
                b[j] = tem;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(s>a[i])
        {
            s+=b[i];
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
