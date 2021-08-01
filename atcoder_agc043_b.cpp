#include<bits/stdc++.h>
using namespace std;
long long int arr[1000010];
long long int forwarddely(long long int y[],long long int &del)
{
    while(del != 0)
    {
        for(long long int i=0; i<del-1; i++)
        {
            y[i] = abs(y[i+1]-y[i]);
        }
        del--;
        if(del == 0)
            return arr[0];
    }
}

int main()
{
    long long int m,i,j;
    string n;
    cin>>m>>n;
    for(i=0; i<m; i++)
    {
        arr[i] = n[i] - '0';
    }
    j = forwarddely(arr,m);
    printf("%lld\n",j);
    return 0;
}
