#import<iostream>
using namespace std;

int main()
{
    int a,n,sum=0,i;
    cin>>n;
    for(i = 1; i<=n ;i++){
        cin>>a;
        if(a> 0)
            sum+=a;
        else
            sum-=a;
    }
    cout<<sum<<endl;
}
