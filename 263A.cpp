#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[5][5],x,y,m,n;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                x = i+1;
                y = j+1;
            }
        }
    }
    if(x>3)
        m = x-3;
    else
        m = 3-x;
    if(y>3)
        n = y-3;
    else
        n = 3-y;
    cout<<m+n<<endl;
    return 0;
}
