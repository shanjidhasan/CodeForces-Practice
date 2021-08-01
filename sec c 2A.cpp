#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int m,n;
    while(1)
    {
        cin>>m;
        cin>>n;

        if(getchar()==EOF)
            break;
        if(m>n)
                cout<<(m-n)<<endl;
        else
                cout<<(n-m)<<endl;

    }
    return 0;
}
