#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,f1=0,f2=0;
    char c;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    s1 = s1 + s2 + s3;
    for(i=0;i<s1.size();i++)
    {
        if(s1[i] == '=')f1 = 1;
        else if((s1[i] == 'H' || s1[i] == 'T' || s1[i] == 'P') && f1 == 1)f2 = 1;
        if(f2 == 1)break;
    }
    if(f2 == 1)
        cout<<s1[i]<<endl;
    else
        cout<<"You shall pass!!!"<<endl;
    return 0;
}


