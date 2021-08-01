#include<stdio.h>
#include<string.h>
int main()
{
    char string1[]= {"qwertyuiopasdfghjkl;zxcvbnm,./"};
    int n1,n2,i,j;
    char a,c;
    char str[100];
    scanf("%c",&a);
    scanf("%s",str);
    n1=strlen(string1);
    n2=strlen(str);
    if(a=='R')
    {
        for(i=0; i<n1; i++)
        {
            for(j=0; j<n2; j++)
            {
                {
                    if(str[j]==string1[i])
                        str[j]=string1[i-1];
                }
            }
        }
    }
    else if(a=='L')
    {
        for(i=0; i<n1; i++)
        {
            for(j=0; j<n2; j++)
            {
                {
                    if(str[j]==string1[i])
                        str[j]=string1[i+1];
                }
            }
        }
    }
    for(j=0; j<n2; j++)
    {
        printf("%c",str[j]);
    }
    return 0;

}
