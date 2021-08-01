#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j;
    char s[100000];
    cin>>t;
    while(t--)
    {
        cin>>s;
        strrev(s);
        if(s[0] == 'o' && s[1] == 'p')cout<<"FILIPINO"<<endl;
        else if((s[0] == 'u' && s[1] == 's' && s[2] == 'e' && s[3] == 'd') || (s[0] == 'u' && s[1] == 's' && s[2] == 'a' && s[3] == 'm'))cout<<"JAPANESE"<<endl;
        else
            cout<<"KOREAN"<<endl;
    }
    return 0;
}
