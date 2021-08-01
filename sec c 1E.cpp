#include<iostream>
using namespace std;
int main()
{
    int i,n,j,temp,a[100],sum1=0,sum2 =0,k,p;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

        }
    }
    k=1;
    while(k<=n)
    {
        sum1 = 0;
        sum2 = 0;
        for(i=0; i<n; i++)
        {
            if(i<k)
                sum1+=a[i];
            else
                sum2+=a[i];
        }
        if(sum1>sum2)
        {
            p = k;
            break;
        }
        k++;
    }
    cout<<p;
}
