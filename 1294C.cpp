#include<bits/stdc++.h>
using namespace std;
bool IsPrime(int x)
{
    //isPrime=true;
    for(int a = 2; a < x/2; a++)
    {
        if (x % a == 0)
            return false;
    }
    return true;
}
int main()
{
    long long int t,a[4],b,c,n,f,i,x,y,z;
    cin>>t;
    while(t--)
    {
        f = 0;
        cin>>n;
        for(i=2; i<n/2; i++)
        {
            if(n%i == 0 && !IsPrime(n/i))
            {
                x = i;
                n = n/i;
                f = 1;
                break;
            }
        }
        if(f == 1)
        {
            f = 0;
            for(i=2; i<n/2; i++)
            {
                if(n%i == 0 && i!=x && n/i != x && n/i != i)
                {
                    y = i;
                    z = n/i;
                    f = 1;
                    break;
                }
            }
        }

        if(f == 1 && z != x && z != y)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;}
            else
                cout<<"NO"<<endl;
        }
        return 0;
    }

