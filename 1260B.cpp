#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c,sum,i,j,x,ans,y,tem;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(x>y)
        {
            tem = y;
            y = x;
            x = tem;
        }
        if(x==0&&y==0){
            cout<<"YES"<<endl;continue;}
        if((x*2==y)||(y*2==x)){
            cout<<"YES"<<endl;continue;}
        if(x!=0&&y!=0)
        if(((x-1)*2 == (y-2))||float(1.0*(y-1)/2) == float((x-2)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        else
            cout<<"NO"<<endl;
        }
return 0;
}

