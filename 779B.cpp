#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int n,i,j,k=0,z=0;
    cin>>s>>n;
    for(i=s.size()-1;i>=0;i--)
    {
        if(z == n)break;
        if(s[i] == '0')
        {
            z++;
        }

        else
        {
            k++;
        }
    }
    if(z<n)
        cout<<s.size()-1<<endl;
    else
        cout<<k<<endl;
    return 0;
}

