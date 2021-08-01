#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a[110],sum,k;
    cin>>t;

    while(t--)
    {
        cin>>n;
        if((n/2)%2 != 0)
            cout<<"NO\n";
        else
        {sum = 0;
            cout<<"YES\n";
            for(i = 1; i<=n/2 ; i++)
            {
                cout<<i*2<<" ";
                sum+=i*2;
            }
            i = 1;k=0;
            int c=0,sum1=0;
            vector<int>v1,v2;
            vector<int>::iterator it;
        for(i=1;; i+=2)
        {
            v2.push_back(i);
            c++;
            sum1+=i;
            if(c==n/2-1)
            {
                k=sum-sum1;
                if(k%2!=0)
                {
                    v2.push_back(k);
                    break;
                }
                else
                {
                    break;
                }
            }
        }
        for(it = v2.begin();it!=v2.end();it++)
            {
                cout<<*it<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}


