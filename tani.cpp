#include<iostream>
using namespace std;
class coord
{
    int *x,*y;
public:
    coord()
    {
        x=new int;
        *x = 0;
        y=new int;
        *y = 0;
    }
    coord(int i,int j)
    {
        x=new int;
        *x=i;
        y=new int;
        *y=j;
    }
    void get_xy(int &i,int &j)
    {
        i=*x;
        j=*y;
    }
    coord operator+(coord ob2);

};
coord coord::operator+(coord ob)
{
    coord temp;
    *temp.x=*x+*ob.x;
    *temp.y=*y+*ob.y;
    return temp;
}

int main()
{
    coord o1(10,10);
    coord o2(20,20);
    coord o3;
    int x,y;
    o3=o1+o2;

    o3.get_xy(x,y);
    cout<<"(o1+o2) X:"<<x<<" Y :"<<y<<endl;
}
