#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,a,b;
    cin>>t;
    set <int> s;
    while(t--)
    {
        cin>>a;
        for(int i=0;i<a;i++){
        cin>>x;
        s.insert(x);}
        cout<<s.size()<<endl;s.clear();
    }
    return 0;
}

