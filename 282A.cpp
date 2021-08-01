#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,x=0;
    string a;
    cin>>n;
    for(i=1;i<=n;i++)
    {        cin>>a;
        if(a[2]=='+')
            x++;
        else if(a[2]=='-')
            x--;
        else if(a[0]=='-')
            --x;
        else if(a[0]=='+')
            ++x;
    }
    cout<<x<<endl;
    return 0;
}
