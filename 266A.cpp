#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int n,i,j,x=0;
    cin>>n;
    cin>>a;
    n = a.length();
    x=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                x++;
                a[i]=j;
            }
            else
                break;
        }
    }
    cout<<x<<endl;
    return 0;
}

