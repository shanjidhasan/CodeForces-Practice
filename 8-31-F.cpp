#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    long long int n,s[1000],i,j,sum;
    float avg, m, a, a1;
    cin>>n;
    while(n != 0)
    {
            sum = 0;
            a1 = 0;
            for(i=0; i<n; i++)
            {
                cin>>s[i];
                sum += s[i];
            }
            m = sum/n;
            for(i=0; i<n; i++)
                a1 += pow((s[i]-m),2);
            a = sqrt(a1/n);
            std::cout<<fixed << std::setprecision(8) << a <<endl;
            cin>>n;
    }
}


