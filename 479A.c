#include<stdio.h>
int main()
{
    int a,b,c,x,y,z,w,v;
    scanf("%d %d %d",&a,&b,&c);
    w = a+b*c;
    x = a*(b+c);
    y = a*b*c;
    z = (a+b)*c;
    v = a+b+c;
    if(v==w)
        w=-1;
    if(v==x)
        x=-2;
    if(v==y)
        y=-3;
    if(v==z)
        z=-4;
    if(v>w && v>x && v>y && v>z)
        printf("%d\n",v);
    else if(w>v && w>x && w>y && w>z)
        printf("%d\n",w);
    else if(x>v && x>w && x>y && x>z)
        printf("%d\n",x);
    else if(y>v && y>x && y>w && y>z)
        printf("%d\n",y);
    else
        printf("%d\n",z);
    return 0;
}
