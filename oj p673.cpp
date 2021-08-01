#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int n,i,x,b1,b2,p1,p2,j;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        x = a.length();
        b1=0;
        b2=0;
        p1=0;
        p2=0;
        for(j=0; j<x; j++)
        {
            if(a[j]=='[')
                b1++;
            else if(a[j]==']')
                b2++;
            else if(a[j]=='(')
                p1++;
            else if(a[j]==')')
                p2++;
        }
        if(p1==p2&&b1==b2)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
    }
    return 0;
}
