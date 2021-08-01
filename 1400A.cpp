#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--){
        string s1;
        cin>>n;
        cin>>s;
        for(int i = 0;i<s.size();i++){
            if(i%2==0)
            s1+=s[i];
        }
        cout<<s1<<endl;
    }
    return 0;
}

