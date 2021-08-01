#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,k,i,f,j,max;
    char s[110];
    cin>>t;
    while(t--)
    {
        max = 0;
        cin>>k;
        cin>>s;
        for(i=0; i<k-1; i++)
        {
            if(s[i] == 'A')
            {
                f = 0;
                j = i+1;
                for(j=i+1;j<k;j++)
                {
                    if(s[j] == 'P')
                    f++;
                    if(s[j] == 'A')break;
                }
                if(max<f)
                    max = f;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
