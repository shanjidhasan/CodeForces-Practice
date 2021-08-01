#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,t,max,min,maxd,a,b,x,y,f;
    vector <int> v;
    cin>>t;
    while(t--)
    {
        f = 0;
        max = LONG_LONG_MIN;
        min = LONG_LONG_MAX;
        maxd = LONG_LONG_MIN;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>x;
            if(x!=-1)
                f = 1;
            v.push_back(x);
            if(x>=max && x != -1)
            {
                max = x;
            }
            if(x<=min && x != -1)
            {
                min = x;
            }
            if(i!=0 && v[i-1] != -1 && v[i] != -1 && abs(v[i-1]-v[i])>=maxd)
            {
                maxd = abs(v[i-1]-v[i]);
                a = v[i-1];
                b = v[i];
            }
            //cout<<max<<" "<<min<<endl;
        }
        if(f == 0)
        {
            cout<<0<<" "<<42<<endl;
            continue;
        }
        if(max-min<=maxd)
            cout<<maxd<<" "<<a<<endl;
        else
        {
            y = (max-min)/2 + min;
            cout<<(max-min)/2<<" "<<y<<endl;
        }
        v.clear();
    }
    return 0;
}
