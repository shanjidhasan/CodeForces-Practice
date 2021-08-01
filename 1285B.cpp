#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,f,n,i,l,r;
	cin>>t;
	while(t--)
    {
        l = 0;r = 0;f = 0;
		cin>>n;
		long long a[n+2];
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		{
			l+=a[i];
			r+=a[n-1-i];
			if(l<=0||r<=0)
                f=1;
		}
		if(f == 1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
	}
}
