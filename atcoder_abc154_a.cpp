#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    int n,m;
    cin>>s1>>s2;
    cin>>n>>m;
    cin>>s3;
    if(s1==s3)
        cout<<n-1<<" "<<m<<endl;
    else
        cout<<n<<" "<<m-1<<endl;
    return 0;
}
