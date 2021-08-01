#include<stdio.h>
int main()
{
    int x,z,y,i=0,t,f=0,a[4];
    scanf("%d",&y);
    x = y;
    while(f!=1)
    {
      x += 1;
      z=x;
      while(i<4)
      {
          a[i]=z%10;
          i++;
          z/=10;
      }
      i=0;
      if(a[0]!=a[1] && a[0]!=a[2] && a[0]!=a[3] && a[1]!=a[2] && a[1]!=a[3] && a[2]!=a[3])
      {
          printf("%d\n",x);
          f=1;
      }
    }
    return 0;
}
