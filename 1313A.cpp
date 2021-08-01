#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a[5],b,c,i,j,k;
    cin>>t;
    while(t--)
    {k = 0;
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[2] > 0)
        {
            a[2]--;k++;
        }
        if(a[1] > 0)
        {
            a[1]--;k++;
        }
        if(a[0] > 0)
        {
            a[0]--;k++;
        }
        if(a[2] > 0 && a[1] > 0)
        {
            a[2]--;a[1]--;k++;
        }
        if(a[2] > 0 && a[0] > 0)
        {
            a[2]--;a[0]--;k++;
        }
        if(a[1] > 0 && a[0] > 0)
        {
            a[1]--;a[0]--;k++;
        }

        if(a[2] > 0 && a[1] > 0 && a[0]>0)
        {
            a[2]--;a[1]--;a[0]--;k++;
        }
        cout<<k<<endl;
    }
    return 0;
}
