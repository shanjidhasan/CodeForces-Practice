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
    for(i=0;i<n;i++){#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

bool Vowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main ()
{
    string s;

    cin >> s;

    for ( int i = 0; i < s.size(); i++ ) {
        s [i] = tolower(s [i]);
    }

    for ( int i = 0; i < s.size(); i++ ) {
        if (!Vowel(s [i])) {
            printf (".%c", s [i]);
        }
    }

    printf ("\n");

    return 0;
}
    if(s[i]!=0){
            printf(".");
        printf("%c",s[i]);
    }}
    return 0;
}



