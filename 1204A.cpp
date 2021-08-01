#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x;
    x=s.size();
    for(int i=s.size()-1; i>=1; i--)
    {
        if(s[i]=='1')
        {
            x++;
            break;
        }
    }
    cout<<x/2;
}
