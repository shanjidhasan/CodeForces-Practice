#include<iostream>
using namespace std;
int main()
{
    long long m,n,i,j,t,k,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>m;
        sum=0;
        for(i=0; i<m; i++)
        {
            cin>>k;
            if(k<=2048)
                sum+=k;
        }
        if(sum>=2048)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
