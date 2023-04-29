#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    string s;
    cin>>s;
    int lower=0,upper=0;
    string lowerAns = "";
    string upperAns = "";
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            lower++;
            lowerAns+=s[i];
            upperAns+=s[i]-32;
        }
        else{
            upper++;
            lowerAns+=s[i]+32;
            upperAns+=s[i];
        }
    }
    if(lower>=upper){
        cout<<lowerAns<<endl;
    }
    else{
        cout<<upperAns<<endl;
    }
    return 0;
}