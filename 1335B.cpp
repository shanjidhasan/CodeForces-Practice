#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,a,b,k;
    char s;
    scanf("%d",&t);
    vector<char>v;
    while(t--)
    {
        s='a';
        k = 1;
        scanf("%d %d %d",&n,&a,&b);
        for(i=1; i<=n; i++)
        {
            v.push_back(s);
            if(k<b)
            {
                k++;
                s++;
            }
            else
            {
                k=1;
                s='a';
            }
        }
        for(i=0;i<n;i++)
            cout<<v[i];
        cout<<"\n";
        v.clear();
    }
    return 0;
}
