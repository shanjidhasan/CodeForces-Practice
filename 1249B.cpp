#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,i,j,k=0,t,n,f,l=0,temp,x;
    int a[205];
    int b[205];
    cin>>q;
    for(t = 0; t<q; t++)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
        scanf("%d",&a[i]);
        }
        for(i=1; i<=n; i++)
        {

            j = i;
            k = 0;
            while(1)
            {
                j = a[j];
                k++;
                if(j==i)
                    break;
            }
            printf("%d ",k);
        }
        printf("\n");
}
    return 0;
}

