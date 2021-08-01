#include<iostream>
using namespace std;
int main()
{
    int min,n,t,s=0,m=0,p=0,i,k,e,f,j,a[5000],b[5000],c[5000];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>t;
        if(t==1)
        {

            a[p]=i;
            p++;
        }
        if(t==2)
        {

            b[m]=i;
            m++;
        }
        if(t==3)
        {

            c[s]=i;
            s++;
        }
    }
    min = (p<m)?p:m;
    min = (min<s)?min:s;
    cout<<min<<endl;

    for(i=0;i<min;i++)
    cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
    return 0;

}
