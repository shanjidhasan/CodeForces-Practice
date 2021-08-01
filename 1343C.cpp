#include<bits/stdc++.h>
using namespace std;
int sign(long long n)
{
    if(n > 0)
        return 0;
    else if(n < 0)
        return 1;
}
int main()
{
    long long  t,n,i,f,tem,x ;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>x;
        if(sign(x)==0)
            f = 0;
        else
            f = 1;
        tem = x;long long sum = 0;
        for(i=1; i<n; i++)
        {
            cin>>x;
            if(sign(x) == f && f == 0)
            {
                tem = max(tem,x);
            }
            else if(sign(x) == f && f == 0)
            {
                tem = min(tem,x);
            }
            else if(sign(x) != f)
            {
                sum+=tem;
                f = sign(x);
                tem = x;
            }
        }
        sum+=tem;
        cout<<sum<<"\n";
    }
    return 0;
}


