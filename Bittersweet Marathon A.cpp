#include<iostream>
using namespace std;
int main()
{
    int t,a,b,i=1;
    cin>>t;
    while(t)
    {
      cin>>a>>b;
      cout<<"Case "<<i<<": "<<a+b<<endl;
      t--;
      i++;
    }
    return 0;
}
