#include<iostream>
using namespace std;
int main()
{
    int r,c,x[100][100],s=0,sum=0;
    cin>>r>>c;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>x[i][j];
            s+=x[i][j];
        }
        x[i][c]=s;
        s=0;
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<=c; j++)
        {
                if(j==c)
                    cout<<x[i][j];
                else
                cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=r; i<=r; i++)
    {
        for(int i=0; i<c; i++)
        {
            for(int j=0; j<r; j++)
            {
                sum+=x[j][i];
            }
            cout<<sum;
            if(i !=c-1 && i != r)
                cout<<" ";
            sum=0;
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            sum+=x[i][j];
        }
    }
    cout<<" "<<sum<<endl;
}
