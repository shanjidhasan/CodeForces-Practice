#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,k=0,p,b,f,h,c,ans,x,y;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        x = 0;
        y = 0;
        cin>>b>>p>>f>>h>>c;
        if(c>=h)
        {
           if(f*2<=b)
           {
               x += f;
               b -= x*2;
           }
           else
           {
               x += b/2;
               b -= x*2;
           }
           if(p*2<=b)
           {
               y += p;
               b -= x*2;
           }
           else
           {
               y += b/2;
               b -= y*2;
           }
        }
        else
        {
            if(p*2<=b)
           {
               y += p;
               b -= y*2;
           }
           else
           {
               y += b/2;
               b -= y*2;
           }
            if(f*2<=b)
           {
               x += f;
               b -= x*2;
           }
           else
           {
               x += b/2;
               b -= x*2;
           }
        }
    cout<<x*c+y*h<<endl;
    }
    return 0;
}
