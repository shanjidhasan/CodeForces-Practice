#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,x,y,total=0,mov,i;
    string a,b;
    cin>>n;
    cin>>a;
    cin>>b;
    for(i=0; i<n; i++)
    {
        if(a[i]=='0')
            x = 0;
        else if(a[i]=='1')
            x = 1;
        else if(a[i]=='2')
            x = 2;
        else if(a[i]=='3')
            x = 3;
        else if(a[i]=='4')
            x = 4;
        else if(a[i]=='5')
            x = 5;
        else if(a[i]=='6')
            x = 6;
        else if(a[i]=='7')
            x = 7;
        else if(a[i]=='8')
            x = 8;
        else if(a[i]=='9')
            x = 9;

        if(b[i]=='0')
            y = 0;
        else if(b[i]=='1')
            y = 1;
        else if(b[i]=='2')
            y = 2;
        else if(b[i]=='3')
            y = 3;
        else if(b[i]=='4')
            y = 4;
        else if(b[i]=='5')
            y = 5;
        else if(b[i]=='6')
            y = 6;
        else if(b[i]=='7')
            y = 7;
        else if(b[i]=='8')
            y = 8;
        else if(b[i]=='9')
            y = 9;

        if(x>y)
        {
            if(x-y<=5)
                mov = x-y;
            else
                mov = 9-x+y+1;
        }
        else
        {
            if(y-x<=5)
                mov = y-x;
            else
                mov = 9-y+x+1;
        }
        total += mov;
    }
    cout<<total<<endl;
    return 0;

}


