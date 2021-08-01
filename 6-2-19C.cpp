#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[300000];
    int n,i,j,x=0,k;
    int y[50000][3];
    int t;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
                x++;
                y[x][1] = i;
                y[x][2] = j;
            }
        }
    }
    cout<<x<<endl;
    for(i=1;i<=x;i++)
        cout<<y[i][1]<<" "<<y[i][2]<<endl;
    return 0;
}
