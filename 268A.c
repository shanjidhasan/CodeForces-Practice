#include<stdio.h>
int main()
{
    int i,j,n,t[30][2],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d %d",&t[i][1],&t[i][2]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        if(t[i][1]==t[j][2])
        c++;
    printf("%d\n",c);
    return 0;
}
