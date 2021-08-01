#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    int i, n;
    char s[100];
    scanf("%s",&s);
    strlwr(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
            s[i]=0;
        if(s[i]=='E')
            s[i]=0;
            if(s[i]=='I')
            s[i]=0;
            if(s[i]=='O')
            s[i]=0;
            if(s[i]=='U')
            s[i]=0;
            if(s[i]=='a')
            s[i]=0;
            if(s[i]=='e')
            s[i]=0;
            if(s[i]=='i')
            s[i]=0;
            if(s[i]=='o')
            s[i]=0;
            if(s[i]=='u')
            s[i]=0;
    }
    for(i=0;i<n;i++){
    if(s[i]!=0){
        printf(".%c",s[i]);
    }}
    return 0;
}



