#include<bits/stdc++.h>
using namespace std;
bool Prime(int x)
{
    if(x <= 1)
        return false;
    if(x <= 3)
        return true;
    if(x%2 == 0 || x%3 == 0)
        return false;
    for(int i=5;i*i<=x;i=i+6)
        if (x%i == 0 || x%(i+2) == 0)
            return false;
    return true;
}
int main()
{
    long long int a,b,n,i,j,k,l,m,p,q,f;
    cin>>p;
    m = 4;
    n = 4 + p;
    while(Prime(m) || Prime(n))
    {
        for(i = m+1;;i++)
        if(!Prime(i)){m = i;break;}
        n = m+p;
    }
    cout<<n<<" "<<m<<endl;
    return 0;
}
