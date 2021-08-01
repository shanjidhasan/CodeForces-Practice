#include<iostream>
#include<cstdio>
using namespace std;

main()
{
    int x,y,n,s=0,i;
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {

        scanf("%d",&y);

        if(x == y)
        continue;
        s++;
        x = y;
    }
    printf("%d",s);
}
