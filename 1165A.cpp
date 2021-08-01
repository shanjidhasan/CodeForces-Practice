#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n1,ans1=0,d,i=0,x,y;
    char n[200010];
    cin>>n1>>x>>y;
    cin>>n;
    for(int i=n1-1;i>=n1-x;i--)
		if(n[i]=='1'&&i!=n1-y-1)
			ans1++;
	if(n[n1-y-1]=='0')
		ans1++;
	cout<<ans1;
    return 0;
}



