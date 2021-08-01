#include<iostream>
using namespace std;
int main()
{
    char a[100005];
    int n,i,x=0,y=0;
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i] == 'z')
            x++;
        else if(a[i]=='n')
            y++;
    }
    for(i=0;i<y;i++)
        cout<<"1 ";
    for(i=0;i<x;i++)
        cout<<"0 ";
    return 0;
}
