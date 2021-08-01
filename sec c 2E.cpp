#include<iostream>
using namespace std;
int main(){
int a[3][100000],f=0,i,m,j,ans1,ans2,n;
    cin>>n;
    m=n;
    for(i=0; i<3; i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
        m--;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[0][i]==a[1][j])
            {
                f = 1;
                break;
            }
        }
        if(f==0)
        {
            ans1 = a[0][i];
            break;
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-2;j++)
        {
            if(a[1][i]==a[2][j])
            {
                f = 1;
                break;
            }
        }
        if(f==0)
        {
            ans2 = a[1][i];
            break;
        }
    }
    cout<<ans1<<endl<<ans2;
    return 0;
}
