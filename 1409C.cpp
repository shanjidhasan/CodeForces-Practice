#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,n1,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n1>>x>>y;
        if(n1 == 2)
            cout<<x<<" "<<y<<endl;
        else
        {
            n = y-x;
            vector<int> v;
            for (int i = 1; i*i < n; i++)
            {
                if (n % i == 0)
                    v.push_back(i);
            }
            for (int i = sqrt(n); i >= 1; i--)
            {
                if (n % i == 0)
                    v.push_back(n/i);
            }
            for (int i = v.size() - 1; i >= 0; i--)
                printf("%d ", v[i]);



        }

    }
    return 0;
}


