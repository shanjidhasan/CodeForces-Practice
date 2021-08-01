#include<iostream>
#include<fstream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    char s[100],s1[100][20]={},word[20];
    int n,sl,i=0,x=0,j,k;

    gets(s);
    cin>>n;
    ofstream filew;
    filew.open("sample.txt");
        filew<<s<<endl;
    filew.close();

    ifstream file;
    file.open("sample.txt");
    while (file >> word)
    {
        x += strlen(word);
        if(x<=n)
        {
            strcat(s1[i],word);
            strcat(s1[i]," ");
            x++;
            //cout<<s1[i]<<endl<<x<<endl<<i<<endl;
        }
        else
        {
            i++;
            strcat(s1[i],word);
            x = strlen(word);
            strcat(s1[i]," ");
            x++;
            //cout<<s1[i]<<endl<<x<<endl<<i<<endl;
        }
    }
    for(j=0;j<=i;j++)
    {
        sl = strlen(s1[j])-1;
        for(k = 0;k < n-sl;k++)
            cout<<" ";
        cout<<s1[j]<<endl;
    }
    file.close();

    return 0;
}
