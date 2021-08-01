#include<bits/stdc++.h>
using namespace std;
int main(int n)
{
    string s,a="";
    vector<string> t = {"","","2","3","223","5","53","7","7222","7332"};
    cin>>n>>s;
    for(int c:s)
        a+=t[c-48];
    sort(a.rbegin(),a.rend());
    cout<<a;
}
