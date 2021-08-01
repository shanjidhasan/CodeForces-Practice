#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,i,x,y,a,ar[1000],lastDigit,firstDigit,num,sum;
    //char n[1000000];
    long long int n;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>ar[i];
        /*if(n[0]==0)
            x =0;
        else if(n[0]=='1')
            x =1;
        else if(n[0]=='2')
            x =2;
        else if(n[0]=='3')
            x =3;
        else if(n[0]=='4')
            x =4;
        else if(n[0]=='5')
            x =5;
        else if(n[0]=='6')
            x =6;
        else if(n[0]=='7')
            x =7;
        else if(n[0]=='8')
            x =8;
        else if(n[0]=='9')
            x =9;

            a = strlen(n);
            if(n[0]==0)
            y =0;
        else if(n[a-1]=='1')
            y =1;
        else if(n[a-1]=='2')
            y =2;
        else if(n[a-1]=='3')
            y =3;
        else if(n[a-1]=='4')
            y =4;
        else if(n[a-1]=='5')
            y =5;
        else if(n[a-1]=='6')
            y =6;
        else if(n[a-1]=='7')
            y =7;
        else if(n[a-1]=='8')
            y =8;
        else if(n[a-1]=='9')
            y =9;*/
    }
    for(i=0;i<t;i++)
    {
        num = ar[i];
        lastDigit = num % 10;


    firstDigit = num;

    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;

    sum = firstDigit + lastDigit;
    cout<<sum<<endl;

    }
    return 0;
}

