#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,i,j,h,c,t;
    cin>>q;
    double avg,dif1,dif2,dif3;
    while(q--)
    {
        cin>>h>>c>>t;
        i = 1;
        avg = 1.0*(h*i + c*(i-1))/(i+i-1);
        dif1 = abs(t-avg);
        dif3 = abs(((h+c)/2.0)-t);
        if(dif3 == 0 && dif1 !=0)
        {
            cout<<2<<endl;
            continue;
        }

        for(i=2;;i+=1)
        {
            avg = 1.0*(h*i + c*(i-1))/(i+i-1);
            dif2 =  abs(t-avg);
            //cout<<"DIF1 = "<<dif1<<"  DIF2 = "<<dif2<<"  I = "<<(i+i-1)<<endl;
            if(dif1<=dif2)
            {
                i--;
                break;
            }
            dif1 = dif2;
        }

        if(dif3<dif1)
        {
            cout<<2<<endl;
        }
        else if(dif3>dif1)
        {
            cout<<(i+i-1)<<endl;
        }
        else
        {
            if(i+i-1<2)
                cout<<(i+i-1)<<endl;
            else
                cout<<2<<endl;
        }
    }
    return 0;
}


