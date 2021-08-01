#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    int n,m,i,a[200010],f=0,j;
    set <int> s;
    //vector <int> v1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m;
        s.insert(m);
        //v1.push_back(m);
    }
    if(s.size()!=n)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}


