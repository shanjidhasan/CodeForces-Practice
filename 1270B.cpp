#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int f,ans,t,h,a[200010],lb,ub,c,x,y,z,m,n,k1,k2,max,m2,i,min = LONG_LONG_MAX;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>n;
        max = 0;min = LONG_LONG_MAX;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            if(max<a[i])
                max = a[i];
            if(min>a[i])
                min=a[i];//cout<<min<<endl;
        }
        lb = 1;
        ub=n;
        //cout<<max<<" "<<min<<endl<<ub-lb+1;
        while(ub!=lb)
        {
            if(max-min>=ub-lb+1)
            {
                f = 1;
                cout<<"YES"<<endl;
                cout<<lb<<" "<<ub<<endl;
                break;
            }
            else
            {
                if((lb == min && ub == max)||(ub == min && lb == max))
                    break;
                else
                {
                    if(lb==min || lb==max)
                        ub--;
                    else
                        lb++;
                }
            }
        }
        if(f==0)
            cout<<"NO"<<endl;
    }
    return 0;
}



