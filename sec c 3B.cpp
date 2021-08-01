#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,a,d,i;
    char ar[1000000];
    cin>>n;
    cin>>ar;
    for(i=0;i<n;i++)
    {
        if(ar[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout<<"Anton"<<endl;
    else if(d>a)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}

