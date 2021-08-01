#include<stdio.h>
int main()
{
    int m,n,q,i,j=0,k=0,min,p;
    long long int a[1000][3],c[1000][3],b[100000][2];
    scanf("%d %d %d",&n,&m,&q);
    for(i=0;i<m;i++)
        {
        scanf("%lld %lld %lld",&a[i][0],&a[i][1],&a[i][2]);
        }
    for(i=0;i<q;i++)
        scanf("%lld %lld %lld",&b[i][0],&b[i][1]);
    for(i=0;i<q;i++)
    {
        for(p=0;p<m;p++)
            c[p][0]=a[p][0];c[p][1]=a[p][1];c[p][2]=a[p][2];
        c[b[i][0]][2] = b[i][1];
        for(k=0;k<q;k++){
            j=0;
        while(a[j][2]!=n)
        {
            if(a[j][2]==a[k][1])
            {
                c[k][2]+=c[k][2];
            }
        j++;
        }
        }
        min = c[0][2];
        for(p=0;p<q;p++)
            if(min>c[p][2])
            min=c[p][2];
        printf("%d",min);
    }
    return 0;
}
