#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int i,a=0,b=0,n,x;
    cin>>t;
    while(t--)
    {a= 0;b=0;

        cin>>n;
        for(i=0; i<n;i++)
        {
            cin>>x;
            if(x%2 == 1 && i%2 == 0)
                a++;
            if(x%2 == 0 && i%2 == 1)
                b++;

               // cout<<a<<"  "<<b<<endl;
        }
        if(a!=b)
            cout<<-1<<endl;
        else
            cout<<a<<endl;
    }
    return 0;
}

