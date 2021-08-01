#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,a=0,y,max=0;
    cin>>n;
    cin>>y;
    for(i=1;i<n;i++)
    {
        cin>>x;
        if(x<y)
        {
            if(a+1>max)
                max = a+1;
            a=0;
        }
        else
        {
            a++;
        }
        y = x;
        //cout<<a<<" "<<max<<endl;
    }
    if(a+1>max)
                max = a+1;
    cout<<max<<endl;
    return 0;
}
