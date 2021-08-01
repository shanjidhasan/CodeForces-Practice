#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,x=0,n;
    string a;
    cin>>a;
    n = a.length();
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            x++;
        else if(x>=6)
            break;
        else
            x = 0;
    }
    if(x>=6)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

