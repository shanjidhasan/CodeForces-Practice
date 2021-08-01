#include<bits/stdc++.h>
using namespace std;
long long arr[200010],sex=1,n;
void fuck(long long a,long long b)
{
    if(a==b)
    {
        arr[b] = sex++;
        return ;
    }
    else
    {
        if((b-a+1)%2==1)
        {
            arr[(a+b)/2] = sex++;
            if(a>=1&&a<=n && (a+b)/2-1>=1&&(a+b)/2-1<=n)
            fuck(a,(a+b)/2-1);
            if(a>=1&&a<=n && (a+b)/2-1>=1&&(a+b)/2-1<=n)
            fuck((a+b)/2+1,b);
        }
        else
        {
            arr[(a+b-1)/2] = sex++;
            if(a>=1&&a<=n && (a+b-1)/2-1>=1&&(a+b-1)/2-1<=n)
            fuck(a,(a+b-1)/2-1);
            if(a>=1&&a<=n && (a+b-1)/2-1>=1&&(a+b-1)/2-1<=n)
            fuck((a+b-1)/2+1,b);
        }
    }
}
int main()
{
    long long t,m,x,y,sum,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        else
        {sex = 1;
            fuck(1,n);
            for(i=1;i<n;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }

    }

    return 0;
}
