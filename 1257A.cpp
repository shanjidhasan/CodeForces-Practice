#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b,x,n,i,f,tem;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&n,&x,&a,&b);
        if(a>b)
        {
            tem = a;
            a = b;
            b = tem;
        }
        for(i = 1; i <= x; i++)
        {

            f = 0;
            if(b<n)
            {
                b++;
                f = 1;
            }
            if(a>1 && f == 0)
            {
                a--;
            }
        }
        cout<<b-a<<endl;
    }
    return 0;
}
