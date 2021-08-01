#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b,x,y,n,i,f,tem;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
        if(x == y || x>y)
        {
            cout<<"YES"<<endl;
        }
        else if(x != y && x!=3)
        {
            f = 0;
            while(x<=y+1)
            {
                if(x%2==0)
                {
                    x = 3*x/2;
                }
                else if(x%2 != 0 && x>1)
                    x--;
                if(x%2 != 0 && x<=1)
                {
                    break;
                }
                if(x == y)
                {
                    f = 1;
                    break;
                }

            }
            if(f == 1)
                cout<<"YES"<<endl;
            else if(f == 0)
                cout<<"NO"<<endl;
        }
        else if(x==3)
            cout<<"NO"<<endl;
    }
    return 0;
}

