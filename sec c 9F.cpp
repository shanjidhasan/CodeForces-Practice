#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,x;
    map<string,int> mp;
    char s[1000],s1[15],s2[15];
   // for(i=0;i<t;i++)
    {
            cin>>n;
       cin>>s;
       n = strlen(s);
       for(i=0;i<n;i++)
       {
           s1[] = {};
           for(j=i;j<n;j++)
           {
               strcat(s1,s[j]);
           }
           mp[s1]++;

           if(x<mp.size())
           {
               x = mp.size();
               strcpy(s2,s1);
           }
       }
    printf("%s\n",s2);
    }
    return 0;
}


