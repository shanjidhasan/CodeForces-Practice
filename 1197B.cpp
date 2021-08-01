#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,f = 0 ;
    cin>>n;
    vector <int> v(n);
    for(long long i =0; i<n;i++){cin>>v[i];}
    for(long long i=0;i<n;i++)
    {
        if(i == 0)
        {
            if(v[i]>v[i+1])
            {
                f += 1;
            }
        }
        else if(i == n-1)
        {
            if(v[i]>v[i-1])
            {
                f += 1;
            }
        }
        else
        {
            if(v[i]>v[i-1] && v[i]>v[i+1])
            {
                f += 1;
            }
        }
    }
    if(f > 1) cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
