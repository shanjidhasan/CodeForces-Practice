#include<bits/stdc++.h>
using namespace std;
void prime(long long n)
{
    long long limit = sqrt(n*1.0)+2,k=0;
    vector <long long> v(n+1,0);
    vector <long long> p;
    v[0] = 1;
    v[1] = 1;
    for(long long i=4; i<=n; i+=2)
    {
        v[i]=1;
        k++;
    }
    for(long long i = 2; i<=n; i+=2)
    {
        if(v[i] == 0)
        {
            //cout<<i<<endl;
            p.push_back(i);
        }

        if(i <= limit)
            for(long long j=i*i; j<=n; j+=i*2)
            {
                v[j] = 1;
            }
        if(i==2)i-=1;
    }long long x=0;
    //for(long long i=0;i<p.size()-1;i++)
    {
       // cout<<p[i]<<endl;
    }
    for(long long i=6;i<=n;i++)
    {
        for(long long j = 0;j<p.size();j++)
        {
            if(i%p[j]==0 && i/p[j]!=p[j])
            {
                cout<<p[j]<<" "<<i<<endl;
                x++;
            }
        }
    }
    //  for(long long i=0;i<=n;i++)
    //     cout<<i<<" "<<v[i]<<endl;
    //if(v[n] == 0)
        cout<<x<<endl;
    //else
        //cout<<"NOT Prime."<<endl;
}
void prime(long long n,long long k)
{
    long long limit = sqrt(n*1.0)+2,pr=0;
    vector <long long> v(n+1,0);
    vector <long long> p(1);
    v[0] = 1;
    v[1] = 1;//cout<<69<<endl;
    for(long long i=4; i<=n; i+=2)
    {//cout<<69<<endl;
        v[i]=1;
    }
    for(long long i = 3; i<=n; i+=2)
    {//cout<<69<<endl;
        if(v[i] == 0)
        {//cout<<i<<endl;
            p.push_back(i);
        }
//cout<<69<<endl;
        if(i <= limit)
            for(long long j=i*i; j<=n; j+=i*2)
            {//cout<<69<<endl;
                v[j] = 1;
            }//cout<<69<<endl;
    }//cout<<69<<endl;
    //  for(long long i=0;i<=n;i++)
    //     cout<<i<<" "<<v[i]<<endl;
    pr = 0;
    //cout<<p.size()-1<<endl;
    for(long long i=0; i<p.size()-1; i++)
    {//cout<<79<<endl;
        //cout<<(p[i] + p[i+1] +1)<<" "<<v[(p[i] + p[i+1] +1)]<<endl;
        if((p[i] + p[i+1] +1)<=n){
        if(v[(p[i] + p[i+1] +1)] == 0)
            pr++;}
            else
                break;
            if(pr == k)break;
    }
    //cout<<pr<<endl;
    if(pr==k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{
    long long int n;
    cin>>n;
    prime(n);
    return 0;
}

