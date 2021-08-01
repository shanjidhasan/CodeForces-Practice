#include<iostream>
using namespace std;
int main()
{
    int n,step;
    cin>>n;
    if(n%5==0)
        step = n/5;
    else
    {
        step = n/5+1;
    }
    cout<<step<<endl;
    return 0;
}
