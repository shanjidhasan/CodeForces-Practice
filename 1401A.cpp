#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    float ans;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n%2 == k%2 && k<=n)
            cout<<0<<endl;
        else if(n%2 != k%2 && k<n){
            cout<<1<<endl;
        }
        else
        {
            cout<<k-n<<endl;
        }
    }
    return 0;
}
