#include<iostream>
using namespace std;
class a{
    private int x;
    public a(){
        x = 0;
    }
    public a(int x){
        this->x = x;
    }
    public void show()
    {
        cout<<x<<endl;
    }
}
class b : public a{
    private int y;
    public b():a(){
        y = 0;
    }
    public b(int x,int y):a(x){
        this->y = y;
    }
    public void show()
    {
        super.show();
        System.out.println(y);
    }
}
public class InheritencePractice {
public static void main(String[] args) {
    a obj1 = new a();
    a obj2 = new a(100);
    b obj3 = new b();
    b obj4 = new b(69,6969);
    obj1.show();
    obj2.show();
    obj3.show();
    obj4.show();
    }
}

