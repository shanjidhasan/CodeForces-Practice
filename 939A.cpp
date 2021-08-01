#include<iostream>
using namespace std;
int main()
{
    int n,a[5000],i,j,k,f=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];

    for(i=1;i<=n;i++)
    {

        if(a[a[a[i]]]==i)
        {
            f=1;
            break;
        }
    }

    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
