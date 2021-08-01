#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    long long int t,p,q,n,f,k,j,l=0,i,max = LONG_LONG_MIN;
    cin>>n;
    vector <int>v(n,0);
    set <string> x;
    set <string> :: iterator itt;
    vector <string>s;
    vector <string>::iterator it;
    for(i=0; i<n; i++)
    {
        cin>>s1;
        s.push_back(s1);k = 0;
        for(it = s.begin();it!=s.end();it++)
        {
            if(s1 == *it)k++;
        }
        if(k>max)max = k;
        v[i] = k;
    }

    for(i=0;i<v.size();i++)
    {
        if(v[i] == max)
            x.insert(s[i]);
    }



    for(itt=x.begin(); itt!=x.end(); itt++)
        cout<<*itt<<endl;
    return 0;
}
