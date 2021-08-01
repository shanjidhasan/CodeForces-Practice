#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,a[100],mi,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n<=m)
            mi = n;
        else
            mi = m;
        for(i=0; i<mi; i++)
            a[i] = 0;
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
            {
                cin>>x;
                if(x == 1)
                {
                    a[i] = 1;
                    a[j] = 1;
                }
            }
        x = 0;
        for(i=0; i<mi; i++)
        {
            if(a[i] == 0)
                x++;
        }
        if(x%2==0)
            cout<<"Vivek"<<endl;
        else

            cout<<"Ashish"<<endl;
    }
    return 0;
}
