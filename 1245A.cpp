#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t,x,min,num1,num2,i;
    cin>>t;
    while(t)
    {
        cin>>a>>b;
        min = (a<b) ? a : b;
    for(i=1; i<=min; i++)
    {
        if(a%i==0 && b%i==0)
        {
            x = i;
        }
    }
        if(x == 1)
            cout<<"Finite"<<endl;
        else
            cout<<"Infinite"<<endl;
        t--;
    }
    return 0;
}
