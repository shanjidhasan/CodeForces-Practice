#include<iostream>
using namespace std;
int main()
{
    int t,a,b,i=1;
    cin>>t;
    while(t)
    {
      cin>>a;
      if(a<=10)
      cout<<0<<" "<<a<<endl;
      else
      cout<<a-10<<" "<<10<<endl;
      t--;
    }
    return 0;
}
