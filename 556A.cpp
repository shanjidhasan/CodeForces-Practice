#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long int n,i,z=0,o=0,min;
    string a;
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='0')
            z++;
        else
            o++;
    }
    min = (z<o)?z:o;
    n -= (min*2);
    cout<<n<<endl;

}
