#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],t,eq,len,x;

    cin>>t;
    while(t--)
    {
        eq = 1;
        string s[130];
        cin>>n;
        for(int j = 0 ; j <26 ; j++)
            a[j] = 0;

        for(int i = 0; i<n; i++)
        {
            cin>>s[i];
            for(int j = 0 ; j < s[i].size() ; j++)
            {
                x =(int) s[i][j]-'a';

                a[x]++;
            }

        }
        for(int j = 0 ; j < 26 ; j++)
        {
            //cout<<a[j]<<endl;
            if(a[j]%n!=0)
                eq = 0;
        }

        if(eq == 0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }


    return 0;
}
