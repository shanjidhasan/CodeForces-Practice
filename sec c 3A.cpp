#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,f=0;
    double m;
    cin>>n;
    cin>>m;
    int x = n%5;
    float y = n+0.50;
    if(y<=m && x==0)
    {
        printf("%.2lf\n",(m-y));
    }
    else
        printf("%.2lf\n",m);
    return 0;
}

