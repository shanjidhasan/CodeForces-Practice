#include<iostream>
using namespace std;
int main()
{
    int a[12][12],n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        a[0][i]=1;
        a[i][0]=1;
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            a[i][j]=a[i][j-1]+a[i-1][j];
        }
    }
    cout<<a[n-1][n-1]<<endl;
    return 0;
}
