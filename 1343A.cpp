#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a[110];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i = 4; ; i*=2)
        {
            if(ceil(1.0*n/(i-1)) == (n/(i-1)))
            {
                cout<<(n/(i-1))<<"\n";
                break;
            }
        }
    }
    return 0;
}


