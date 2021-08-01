#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,i,j,k=0,t,n,f,l=0,temp,x;
    int b[100][100];
    cin>>q;
    for(t = 0; t<q; t++)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>b[0][i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(b[0][i]>b[0][j])
                {
                    temp = b[0][i];
                    b[0][i] = b[0][j];
                    b[0][j] = temp;
                }
            }
        }
            f = 0;
            for(i=0; i<n-1; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    if(b[k][j]-b[k][i]<=1)
                    {
                        f=1;
                    }
                }
            }
            if(f==1)
            {
                cout<<2<<endl;
            }
            else
                cout<<1<<endl;
    }
    return 0;
}
