#include<iostream>
using namespace std;
class Share
{
    int amount;
    static int share_holder;
public:
    Share()
    {
        amount=0;
    }
    Share(int amount)
    {
        this->amount=amount;
        ++share_holder;
    }
    static void print(int total_share);
    friend void calculate_total(int& a,Share& ob);
    ~Share()
    {
        cout<<"object destroyed"<<endl;
    }
} ;
void Share::print(int total_share)
{
    cout<<share_holder<<endl;
    cout<<(float)total_share/share_holder<<endl;
}
void calculate_total(int& a,Share& ob)
{
    a+=ob.amount;
}
int Share::share_holder=0;
int main()
{
 int total_share=0;
    Share share1(20);
    calculate_total(total_share,share1);
    Share share2(20);
    calculate_total(total_share,share2);
    Share::print(total_share);
    return 0;
}
