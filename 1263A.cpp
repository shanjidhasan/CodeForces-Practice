#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,r,g,b,k,a[5];
    cin>>t;
    while(t--)
    {
        k=0;
        cin>>a[0]>>a[1]>>a[2];
        sort(a, a + 3);
        while(1)
        {

            if(a[0]!=0 && a[2]!=0)
            {
                if(a[2]-a[1]>=a[0])
                {
                    k+=a[0];
                    a[2] = a[2] - a[0];
                    a[0] = 0;

                    //cout<<69<<" "<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
                }
                else if(a[2]-a[1]!=0)
                {
                    k += a[2]-a[1];
                    a[0] -= a[2]-a[1];
                    a[2] -= a[2]-a[1];
                }
                else
                {
                    k++;
                    a[0]--;
                    a[2]--;
                }
                sort(a, a + 3);
                continue;
            }
            else if(a[1]!=0 && a[2]!=0)
            {
                k+=a[1];
                break;
            }
            else
                break;
        }
        cout<<k<<endl;
    }
    return 0;
}
