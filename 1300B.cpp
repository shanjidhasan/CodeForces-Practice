#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,n,a,x,j,sum,k;
    cin>>t;
    vector <int> v;
    while(t--)
    {
        sum = 0;
        k=0;
        cin>>n;
        for(i=0; i<2*n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());

        cout<<abs(v[n]-v[n-1])<<endl;
        v.clear();
    }
    return 0;
}
