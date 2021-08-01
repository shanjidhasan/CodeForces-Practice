#include<iostream>
using namespace std;
int main()
{
    long long int n,n1,sumn,sumi=-1,m,i,x;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        sumn = 0;
        sumi = 0;
        n1=n;
        while(n1>0)
        {
            m=n1%10;
            sumn=sumn+m;
            n1=n1/10;
        }
         i = 11;

        while(1)
        {
            if(sumn==sumi)
                break;
            sumi = 0;
            x = n*i;
            while(x>0)
            {
                m=x%10;
                sumi=sumi+m;
                x=x/10;
            }
            i++;

        }
        //if(i>10)
        cout<<i-1<<endl;
      //  else
      //  cout<<100<<endl;
    }
    return 0;
}
