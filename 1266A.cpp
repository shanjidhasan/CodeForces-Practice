#include<bits/stdc++.h>
using namespace std;
int permute(string s, string ans)
{ int div,n;
static int m = 0;
    if (s.size() == 0 || m == 1)
    {
        stringstream geek(ans);
        geek>>div;
        if(div%60 == 0)
            return 1;
        else
            return 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        m = permute(s.substr(1), ans + s[0]);
        rotate(s.begin(), s.begin() + 1, s.end());
    }
}
int main()
{
    int n,i,j;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        j = permute(s, "");
        if(j == 1)
            cout<<"red"<<endl;
        else
            cout<<"cyan"<<endl;
    }
    return 0;
}
