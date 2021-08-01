#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,mini,maxi,val,ans;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>v(n+2);
		for(int i=1;i<=n;i++)
			cin>>v[i];
		mini=INT_MAX;maxi=INT_MIN;val;ans=0;
		for(int i=1;i<=n;i++)
		{
			if(v[i]!=-1&&(v[i-1]==-1||v[i+1]==-1))
			{	mini=min(mini,v[i]);
				maxi=max(maxi,v[i]);
			}
	}
		val=(mini+maxi)/2;
		for(int i=1;i<=n;i++)
	{	if(v[i]==-1)
		v[i]=val;
	}
		for(int i=2;i<=n;i++)
		{

			ans=max(ans,abs(v[i]-v[i-1]));
		}
		cout<<ans<<' '<<val<<'\n';
	}
}
