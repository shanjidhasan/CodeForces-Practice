#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n)
{
    for(int i = 0 ; i < n ; i ++)
    {
        int su = 0;
        if(i % 2 == 0)
            su+=arr[i];
        else
            su-=arr[i];
        return su;
    }
}
int main()
{
    int t,n,a[10010],n0,n1,su,lf0,lf1,rg0,rg1,ans1,ans0;
    cin>>t;
    while(t--)
    {
        lf0 = 0;
        lf1 = 0;
        rg0 = 0;
        rg1 = 0;
        n0 = 0;
        su = 0;
        n1 = 0;
        cin>>n;
        for(int i =0 ; i <n ; i++)
        {
            cin>>a[i];
            if(i % 2 == 0)
                su+=a[i];
            else
                su-=a[i];
            if(a[i] == 0)
            {
                n0++;
                if(i <= n/2)
                    lf0++;
                else
                    rg0++;
            }
            else
            {
                n1++;
                if(i <= n/2)
                    lf1++;
                else
                    rg1++;
            }
        }
        if(su == 0)
        {
            cout<<n<<endl;
            for(int i =0 ; i <n ; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            if(n1 >= n/2 && n/2%2 == 0)
            {
                cout<<n/2<<endl;
                for(int i =0 ; i <n/2 ; i++)
                {
                    cout<<1<<" ";
                }
                cout<<endl;
            }
            else if(n0 >= n/2)
            {
                cout<<n/2<<endl;
                for(int i =0 ; i <n/2 ; i++)
                {
                    cout<<0<<" ";
                }
                cout<<endl;
            }
            else
            {
                if(n1>=n/2)
                {
                    if(n/2%2!=0)
                        ans1 = n/2-1;
                }
                else
                {
                    if(n1%2 == 0)
                        ans1 = n1;
                    else
                        ans1 = n1-1;
                }
                ans0 = n/2 - ans1;

                //cout<<n0<<" "<<n1<<" "<<ans1<<" "<<ans0<<" "<<lf0<<" "<<rg0<<" "<<lf1<<" "<<rg1<<endl;

                if(lf0>rg0)
                {
                    cout<<n/2<<endl;
                    for(int i =0 ; i <ans0 ; i++)
                    {
                        cout<<0<<" ";
                    }
                    for(int i =0 ; i <ans1 ; i++)
                    {
                        cout<<1<<" ";
                    }
                    cout<<endl;
                }
                else if(lf0<rg0)
                {
                    cout<<n/2<<endl;
                    for(int i =0 ; i <ans1 ; i++)
                    {
                        cout<<1<<" ";
                    }
                    for(int i =0 ; i <ans0 ; i++)
                    {
                        cout<<0<<" ";
                    }
                    cout<<endl;
                }
                else
                {
                    if(lf1<=rg1)
                    {
                        cout<<n/2<<endl;
                        for(int i =0 ; i <ans0 ; i++)
                        {
                            cout<<0<<" ";
                        }

                        for(int i =0 ; i <ans1 ; i++)
                        {
                            cout<<1<<" ";
                        }
                        cout<<endl;
                    }
                    else
                    {
                        cout<<n/2<<endl;
                        for(int i =0 ; i <ans1 ; i++)
                        {
                            cout<<1<<" ";
                        }
                        for(int i =0 ; i <ans0 ; i++)
                        {
                            cout<<0<<" ";
                        }
                        cout<<endl;
                    }
                }
            }

            }
        }
        return 0;
    }
