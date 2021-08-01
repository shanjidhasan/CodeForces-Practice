#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    int i,n,y;
    scanf("%d", &n);
    for(i=0; i< n ; i++)
    {
        scanf("%s",string);

        y = strlen(string);
        if(y>10)
        {
            printf("%c%d%c\n",string[0],y-2,string[y-1]);
        }
        else
            printf("%s\n",string);
    }
    return 0;
}


