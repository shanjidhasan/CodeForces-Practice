#include <bits/stdc++.h>
using namespace std;
# define NO_OF_CHARS 256
bool compare(string &s1,string &s2)
{
    return s1.size() < s2.size();
}
void badCharHeuristic( string str, int size,int badchar[NO_OF_CHARS])
{
	int i;
	for (i = 0; i < NO_OF_CHARS; i++)
		badchar[i] = -1;
	for (i = 0; i < size; i++)
		badchar[(int) str[i]] = i;
}
int search( string txt, string pat)
{
	int m = pat.size();
	int n = txt.size();
	int badchar[NO_OF_CHARS];
	badCharHeuristic(pat, m, badchar);

	int s = 0;
	while(s <= (n - m))
	{
		int j = m - 1;
		while(j >= 0 && pat[j] == txt[s + j])
			j--;
        if(j==-1)
            return 1;
		if (j < 0)
		{
			s += (s + m < n)? m-badchar[txt[s + m]] : 1;
		}
		else
			s += max(1, j - badchar[txt[s + j]]);
	}
	return 0;
}
int main()
{
	string s[105];
	int n,i,f,j;
	cin>>n;
	for(i=0;i<n;i++)
        cin>>s[i];
    if(n==1)
    {
        cout<<"YES\n"<<s[0]<<"\n";
        return 0;
    }
    sort(s,s+n, compare);
    for(i=0;i<n-1;i++)
    {
        for(j = i+1;j<n;j++){
            f = search(s[j],s[i]);if(f == 0)break;}if(f == 0)break;
    }
    if(f == 1){cout<<"YES\n";
        for(i=0;i<n;i++)
            cout<<s[i]<<"\n";}
    else
        cout<<"NO\n";
	return 0;
}
