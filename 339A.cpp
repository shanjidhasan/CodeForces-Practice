#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j,x=0,n,t;
    string a;
    cin>>a;
    n = a.length();
    for(i=0;i<n;i+=2)
    {
        for(j=i+2;j<n;j+=2)
        {
              if(a[i]>a[j])
              {
                  t = a[i];
                  a[i]=a[j];
                  a[j]= t;
              }
        }
    }
    for(i=0;i<n;i++)
        cout<<a[i];
    return 0;
}


