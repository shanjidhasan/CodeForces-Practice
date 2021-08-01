#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,mini,maxi,val,ans;
	cin>>t>>mini;
	cout<<min(t,mini)<<" "<<(max(t,mini)-min(t,mini))/2<<endl;
	return 0;
}

