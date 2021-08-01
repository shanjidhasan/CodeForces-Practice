#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,k=0,p,j,x[200020],f,z;
    cin>>n;
    for(z=1; z<=n; z++)
    {
        cin>>p;
        for(i=0; i<p; i++)
        {
            cin>>x[i];
        }
        for(i=0; i<p; i++)
        {
            if(i == 0 || i == p-1)
                cout<<1;
            else
            {
                for(k=0; k<p-i; k++)
                {
f = 0;
                    for(j = k; j<=k+i; j++)
                    {
                    //cout<<endl;
                        if(x[j]>i+1)
                        {
                            //cout<<x[j];
                            f = 1;
                            break;
                        }

                    }//cout<<endl<<f<<69<<endl;

                    if(f == 0)
                    {
                        cout<<1;break;
                    }
                }
                    if(f == 1)
                        cout<<0;
            }
        }
        cout<<endl;
    }

    return 0;
}




