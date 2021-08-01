#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    string a,b;
    cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(),:: tolower);
    transform(b.begin(),b.end(),b.begin(),:: tolower);
    x = a.compare(b);
    cout<<x<<endl;
    return 0;
}
