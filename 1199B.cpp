#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,H,L;
    cin>>H>>L;
    h = (L*L-H*H)/(2.0*H);
    cout<<fixed<<setprecision(12)<<h<<endl;
    return 0;
}
