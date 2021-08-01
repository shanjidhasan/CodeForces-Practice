#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    long long int i,a=0,b=0,n,x,k,j,f;
    cin>>t;
    while(t--)
    {
        a= 0;


        string s;

        cin>>n>>k;
        cin>>s;
        for(i=0; i<n; i++)
        {
            if(s[i] == '1')
                i+=k;
            if(s[i] == '0' && i == 0)
            {
                f = 0;b=0;
                for(j = i+1; j<=i+k; j++)
                {
                    if(j==n-1)
                        break;
                    if(s[j] == '1')
                    {
                        f = 1;
                        break;
                    }
                    b++;
                }
                if(f == 0)
                {
                    a++;
                    i+=k;
                    continue;
                }
            }
            else if(s[i] == '0' && i!= 0 && i != n-1)
            {
                f = 0;b=0;
                for(j = i+1; j<=i+k; j++)
                {
                    if(j==n-1)
                        break;
                    if(s[j] == '1')
                    {
                        f = 1;
                        break;
                    }
                    b++;
                }
                if(f == 0 && b == k)
                {
                    a++;
                    i+=k;
                    continue;
                }
            }
            else if(s[i] == '0' && i == n-1)
            {
                f = 0;b=0;
                for(j = i-1; j>=i-k; j--)
                {
                    if(j==0)
                        break;
                    if(s[j] == '1')
                    {
                        f = 1;
                        break;
                    }
                    b++;
                }
                if(f == 0)
                {
                    a++;
                    continue;
                }
            }

        }
        cout<<a<<endl;
    }
    return 0;
}


