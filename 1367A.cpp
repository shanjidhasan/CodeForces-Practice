#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
    int i;
    for(i=0;i<s.size()-1;i+=2)
        cout<<s[i];
    cout<<s[s.size()-1]<<endl;
    }
    return 0;
}
