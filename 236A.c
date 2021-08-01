#include<stdio.h>
#include<string.h>
int main()
{
    int n=0,x,y,count[26] = {0},i,j,f=0;
    char a[1000];
    gets(a);
    y=strlen(a);
    for(i=0;i<y;i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z') {
         x = a[i] - 'a';
         count[x]++;
      }
    }
    for(i=0;i<26;i++)
        if(count[i]!=0)
        n++;
    if(n%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    return 0;
}
