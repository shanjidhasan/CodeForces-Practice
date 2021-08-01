#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,a,b,i,j,sum,f;
    vector <int> v;
    cin>>t;
    while(t--)
    {f=0;
        cin>>n;
        for(i=0;i<4*n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        sum = v[0] * v[4*n-1];
        for(i=0;i<2*n;i+=2)
        {
            //cout<<sum<<endl;
            if((sum != v[i] * v[4*n-i-1]) || (v[i] != v[i+1]) || (v[4*n-i-1] != v[4*n-i-2]))
            {
                f=1;
                break;
            }
            sum = v[i] * v[4*n-i-1];
        }
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        v.clear();
    }
    return 0;
}
