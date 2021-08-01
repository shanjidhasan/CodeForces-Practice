#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,n;
    char a[100000];
    while(scanf("%s",&a)!=EOF)
    {
        n=strlen(a);
        for(i=0;i<n;i++)
        {
            if(a[i]=='[')
            {
                for(j=i+1;;j++)
                {
                    if(a[j]==']')
                        break;
                    else if(a[j]=='[')
                        continue;
                    else
                    {
                        printf("%c",a[j]);
                    }
                }
                i=j;
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]=='[')
            {
                for(j=i+1;;j++)
                {
                    if(a[j]==']')
                        break;
                    else if(a[j]=='[')
                        continue;
                }
                i=j;
            }
            if(a[i]!='['&&a[i]!=']')
            printf("%c",a[i]);
        }
    }
    return 0;
}
