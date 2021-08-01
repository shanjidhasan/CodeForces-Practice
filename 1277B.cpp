#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ans,i,test,j,z,x,base,count,num,a[200010],b[200010];
    scanf("%d",&t);
    while(t--)
    {
        ans=0;
        base=1;
        count = 0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a, a+n, greater<int>());
        for(i=0;i<n;i++)
        {
            if(a[i]%2 == 0)
            {
                sex:
                    count = 0;
                for(j=i;j<n;j++)
                {
                    if(a[i] == a[j])
                    {
                        b[count] = j;
                        count++;
                    }
                }
                a[i] = a[i]/2;
                ans++;
                for(j=0;j<count;j++)
                {
                    a[b[j]] = a[i];
                }
                if(a[i]%2 == 0)
                    goto sex;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
