#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[1000],freq1[110],freq2[110],j,k,f,ans2,ans3,ans1,freq[110],mini,maxi;
    cin>>t;
    while(t--)
    {
        j  = 0 ;
        k = 0;
        f = 0;
        ans1 = 0;
        ans2 = 0;
        ans3 = 0;
        mini = INT_MAX;
        maxi = INT_MIN;
        cin>>n;
        for(int i = 0 ; i <= 100 ; i++)
            freq[i] = 0;
        for(int i = 0 ; i <= 100 ; i++)
            freq1[i] = 0;
        for(int i = 0 ; i <= 100 ; i++)
            freq2[i] = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
            if(mini>=a[i])
                mini = a[i];
            if(maxi<=a[i])
                maxi = a[i];
            freq[a[i]]++;
        }
        sort(a,a+n);
        if(n%2 == 0)
        {
            if(mini>0)
                ans1 = mini-1;
            else
            {
                for(int i = 0 ; i < 100 ; i++)
                {
                    if(freq[i] == 0)
                    {
                        ans1 = i;
                        break;
                    }

                }
            }
            for(int i = 0 ; i < n ; i++)
            {
                if(i%2 == 0)
                    freq1[a[i]]++;
                else
                    freq2[a[i]]++;
            }
            cout<<mini<<" "<<maxi<<" "<<ans1<<endl;
            for(int i = 0 ; i < 100 ; i++)
            {
                cout<<freq[i]<<" ";
            }
            cout<<endl;
            for(int i = 0 ; i < 100 ; i++)
            {
                cout<<freq1[i]<<" ";
            }
            cout<<endl;
            for(int i = 0 ; i < 100 ; i++)
            {
                cout<<freq2[i]<<" ";
            }
            cout<<endl;
            for(int i = 0 ; i < 100 ; i++)
            {
                if(freq1[i] == 0)
                {
                        ans2 = i;
                        break;
                }
            }
            for(int i = 0 ; i < 100 ; i++)
            {
                if(freq2[i] == 0)
                {
                        ans3 = i;
                        break;
                }
            }
            cout<<ans2<<" "<<ans3<<" "<<ans1<<endl;
            if(ans1>=(ans2+ans3))
                cout<<ans1<<endl;
            else
                cout<<ans2+ans3<<endl;

        }
    }
    return 0;
}
