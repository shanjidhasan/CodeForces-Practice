#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int s[510],c,x,a;
    int i,j,t,q,n;
    scanf("%d",&t);
    set<char> s1;
    set<char> :: iterator w;
    while(t)
    {
        cin>>str;
        for(i=0;i<str.size();i++)
        {
            if (str[i] != str[i+1])
            {
                s1.insert(str[i]);
            }
            else
            {
                i++;
            }
        }
        for(w=s1.begin();w!=s1.end();w++)
		{
			cout<<*w;
		}
		cout<<endl;
		s1.clear();
        t--;
    }
    return 0;
}
