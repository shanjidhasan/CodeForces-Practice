#include <iostream>
using namespace std;
int main()
{
    int n,i,bal=0,c=0,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x>0)
            bal+=x;
        else
        {
            if(bal>0)
                bal--;
            else
                c++;
        }
    }
    cout<<c;
    return 0;
}
