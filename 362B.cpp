#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,a[3010],f,k;
    cin>>n>>m;
    k = 0;
    for(i=0; i<m; i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);f=0;
    for(i=0; i<m; i++)
    {
        if(a[i+1]-a[i] == 1 && i!=n-1)
            k++;
        if(k>1 || a[i] == 1 || a[i] == n)
        {
            f = 1;
            break;
        }
        if(a[i+1]-a[i] > 1) k = 0;
    }
    if(f == 1)cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}


