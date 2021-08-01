#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int r1,r2,j;
    int a1[101];
    int i=0;
    cin>>a>>b;
    while(a!=0 && b!=0)
    {
        r1=a%10;
        r2=b%10;
        a=a/10;
        b=b/10;
        if(r1==r2)
        {
            a1[i]=1;
            i++;
        }
        else
        {
            a1[i]=0;
            i++;
        }
    }
    cout<<"I = "<<i<<endl;
    for(j=0;j<3;j++)
    cout<<a1[i];
}
