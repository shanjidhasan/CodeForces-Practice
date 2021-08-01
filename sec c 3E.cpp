#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(cin>>n)
    {
        if(360%(180-n)==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
        return 0;
}
