#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ans,i,test,j,z,x,base,count,num;
    scanf("%d",&t);
    while(t--)
    {
        ans=0;
        base=1;
        count = 0;
        scanf("%d",&n);
        num = n;
        while(num != 0)
        {
            count++;
            num /= 10;
        }
        x = count;
        //cout<<x<<endl;
        ans = (x-1)*9;
        for(i=0; i<x-1; i++)
            base*=10;
        test = n/base;
        z = test;
        for(i=0; i<x-1; i++)
        {
            z = z*10+test;
        }
        if(n>=z)
            ans+=test;
        else
            ans+=test-1;
        cout<<ans<<endl<<endl;
    }
    return 0;
}
