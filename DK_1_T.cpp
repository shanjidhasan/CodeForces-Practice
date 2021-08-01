#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    double x;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>p;
        x+=p;
    }
    cout<<(float)x/n;
    return 0;
}
