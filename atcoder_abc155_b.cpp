#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,p,q,i,n,x,f =0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x%2==0 && x%3 != 0 && x%5!=0)f=1;
        }
    if(f==0)
        cout<<"APPROVED"<<endl;
    else
        cout<<"DENIED"<<endl;
    return 0;
}



