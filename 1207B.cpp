#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,x,y,A,i,j,sum,k,f;
    cin>>n>>m;
    vector<vector<int> > a( n , vector<int> (m));
    vector<vector<int> > b( n , vector<int> (m, 0));
    vector<vector<int> > c( m*n , vector<int> (3, 0));
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>A;
            a[i][j]=A;
            b[i][j]=0;
        }
    }k = 0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(a[i][j] == 1 && a[i+1][j] == 1 && a[i][j+1] == 1 && a[i+1][j+1] == 1)
            {
                b[i][j] = 1 ;
                b[i+1][j] = 1 ;
                b[i][j+1] = 1 ;
                b[i+1][j+1] = 1;
                c[k][0] = i+1;
                c[k][1] = j+1;k++;
            }
        }
    }

    if(a==b && k!=0)
    {
        cout<<k<<endl;
        for(i=0;i<k;i++)
            cout<<c[i][0]<<" "<<c[i][1]<<endl;
    }
    else if(k == 0 && a==b)
        cout<<0<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
