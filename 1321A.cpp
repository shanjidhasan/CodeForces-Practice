#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long p[1100],pbo,po,bo,b[1100],n,i,j,f1=1,f2=1,ans;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>p[i];
    }
    pbo=0;
    po=0;
    bo=0;
    long long o1=0,o2=0,x = 1;
    for(i=0; i<n; i++)
    {
        cin>>b[i];

        if(p[i] == 1)
            o1++;
        if(b[i] == 1)
            o2++;
        if(p[i] == b[i] && p[i] == 1)
            pbo++;
        else if(p[i] != b[i] && b[i] == 1)
            bo++;
        else if(p[i] != b[i] && p[i] == 1)
            po++;
        if(p[i] != b[i])
        {
            f1 = 0;
        }
        if (b[i] != 1)
        {
            f2 = 0;
        }
    }
    if(f1 == 1 || f2 == 1 || (o1==0 && o2 == 1))
    {
        cout << "-1" << endl;
        return 0;
    }

    while(1)
    {
        if(o1>o2)
        {
            cout << x << endl;
            return 0;
        }
        x++;
        o1= o1 + po;
    }
    return 0;
}
