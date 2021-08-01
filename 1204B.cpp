#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,l,r,t,f,min,max;
    cin>>n>>l>>r;
    min = (n-(l-1))*pow(2,0);
    for(i=0;i<n-(n-(l-1));i++)
    {
        min+=pow(2,i+1);
    }
    max = (n-(r-1))*pow(2,r-1);
    for(i=0;i<n-(n-(r-1));i++)
    {
        max+=pow(2,i);
    }
    cout<<min<< " "<<max<<endl;

    return 0;
}

