#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,f,k,l;
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;f = 0;k = 0;
        for(i=0;i<s.size();i++)
        {
            if(s[i] == '1' && s[i+1] == '0' && i != s.size()-1)
            {
                f = 1;i++;l = 0;
                while(i <= s.size()-1)
                {
                    if(s[i] == '0')l++;

                    if(s[i] == '1')
                    {
                        f = 0;break;
                    }i++;
                }//cout<<l<<" "<<k<<endl;
                if(f == 1)l = 0;//
                else
                    i--;
                k+=l;
            }
        }
        cout<<k<<endl;s.clear();
    }
    return 0;
}
