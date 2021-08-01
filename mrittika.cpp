#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    int roll;
    int m1;
    int m2;
    int m3;
    int m4;
    int avg;
    void set_ob(int r,double n1,double n2,double n3,double n4);
};
void student::set_ob(int r,double n1,double n2,double n3,double n4)
{
    roll=r;
    m1=n1;
    m2=n2;
    m3=n3;
    m4=n4;
    avg=0;
}
void sortt(student &ob)
{
    int m[4],i,j,tem;
    m[0] = ob.m1;
    m[1] = ob.m2;
    m[2] = ob.m3;
    m[3] = ob.m4;
    for(i=0;i<4;i++)
    {
        for(j = i; j< 4;j++)
        {
            if(m[i]<m[j])
            {
                tem = m[i];
                m[i] = m[j];
                m[j] = tem;
            }
        }
    }
    //cout<<m[0]<<" "<<m[1]<<" "<<m[2]<<endl;
    ob.set_ob(ob.roll,m[0],m[1],m[2],m[3]);
}
//void sorted(student arr[],int p)

int main()
{
    int N;
    cin>>N;
    int r,i;
    double n1,n2,n3,n4;
    student ob[N];
    for(i=0; i<N; i++)
    {
        //cin>>r;
        cin>>n1;
        cin>>n2;
        cin>>n3;
        cin>>n4;
        ob[i].set_ob(i+1,n1,n2,n3,n4);
        sortt(ob[i]);
        ob[i].avg = (ob[i].m1 + ob[i].m2 + ob[i].m3)/3;
        //cout<<ob[i].m1<<" "<<ob[i].m2<<" "<<ob[i].m3<<endl;
    }
    int tr,p= N,j;
    int tavg;
    for(i=0; i<p; i++)
    {
        for(j=i+1; j<p; j++)
        {
            if(ob[i].avg<ob[j].avg)
            {
                tavg=ob[i].avg;
                ob[i].avg=ob[j].avg;
                ob[j].avg=tavg;
                tr=ob[i].roll;
                ob[i].roll=ob[j].roll;
                ob[j].roll=tr;
            }
        }
    }
    for(i=0; i<p; i++)
    {
        cout<<ob[i].roll<<" "<<ob[i].avg<<endl;
    }
    return 0;
}

