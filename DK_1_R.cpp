#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,x,y,z;
	cin>>n>>m>>a>>b;
	x = n/m*b;
	if(b<n%m*a)
        x+=b;
    else
        x+=n%m*a;
	cout<<min(n*a,x);
    return 0;
}
