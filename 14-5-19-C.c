#include<stdio.h>
#include<string.h>
int main()
{
    int n,f=0,i,j,k;
    char a[200000];
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;i<strlen(a);i+=2)
    {
        for(j=i+1;j<strlen(a);j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<strlen(a);k++)
                    a[k]=a[k+1];
                a[k+1]='\0';
                f++;
            }
        }
    }
    if(strlen(a)%2!=0)
    {
                    a[strlen(a)-1]='\0';
                    f++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==a[j])
        {
            f=n;
            a[0]='\0';
        }
    }
    printf("%d\n%s",f,a);
    return 0;
}
