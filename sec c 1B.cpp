#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,t,i,f,x,j;
    string s;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        cin>>s;
        f = 0;
        for(j=0;j<n;j++)
        {
            if(s[j]=='8'){
                x = j+1;
                f = 1;
                break;
                }
        }
        if(x+10<=n && f == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

