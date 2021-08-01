#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v2;
    vector<int>v;
    int t,n,k,p,x,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&x);
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        if(n%2!=0)
        {
            printf("%d ",v[n/2]);
        }j=v.size();
        j--;
        for(i=0; j>n/2,i<n/2; i++)
        {
            v2.push_back(v[i]);
            v2.push_back(v[j]);
            if(i==n/2 || j==n/2)
               break;
            j--;
        }
        for(i=v2.size()-1; i>=0; i--)
        {
            printf("%d ",v2[i]);
        }
        printf("\n");
        v.clear();v2.clear();
    }
}
