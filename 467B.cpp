#include<bits/stdc++.h>
using namespace std;
int i,z=0;
void bin(unsigned n,int k)
{
    i = 0;
    if (n > 1)
        bin(n/2,k);
    if(n % 2 == 1)
        i++;
}
int main(void)
{
    int j,x,n,m,k,y,a[100000];
    cin>>n>>m>>k;
    for(j = 0 ; j < m+1 ; j++)
    {
        cin>>a[j];

    }
    for(j = 0 ; j < m ; j++)
    {
        bin(a[m]^a[j],k);
        if(i<=k)
            z++;
    }
    cout<<z<<endl;
    return 0;
}
