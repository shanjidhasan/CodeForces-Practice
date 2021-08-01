#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,q,t,i,j,k,y,a,b;
    char s1[25][15],s2[25][15];
    cin>>n>>m;
    for(i=1; i<=n; i++)
        cin>>s1[i];
    for(i=1; i<=m; i++)
        cin>>s2[i];
    cin>>q;
    while(q--)
    {
        cin>>y;
        a = y%n;
        b = y%m;
        if(a == 0)
            a = n;
        if(b == 0)
            b = m;
        cout<<s1[a]<<s2[b]<<endl;
    }
    return 0;
}
