#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char name1[100],name2[100];
    scanf("%s",&name1);
    scanf("%s",&name2);
    tolower(name1);
    tolower(name2);
    int d=strcmp(name1,name2);
     printf("%d\n%s\n%s",d,name1,name2);

}
