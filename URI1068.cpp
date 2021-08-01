#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10009];

    stack<char>s;
    stack<char>s1;
    while(scanf("%s",&str) != EOF)
    {
        for(int i = 0; i<strlen(str); i++)
        {
            if(str[i] == '(')
                s.push(str[i]);
            else if(str[i] == ')')
            {
                s1.push(')');
                if(!s.empty())
                {
                    s1.pop();
                    s.pop();
                }
            }
        }
        if(s.empty() && s1.empty())
            cout<<"correct"<<s.empty()<<s1.empty()<<endl;
        else
            cout<<"incorrect"<<s.empty()<<s1.empty()<<endl;

    }
    return 0;
}

