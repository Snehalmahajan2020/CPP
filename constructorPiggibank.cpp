#include<iostream>
using namespace std;
class addAmount
{
    private:
        int amount=50;
    public:
        addAmount()
        {
            cout<<"\n bank balance";
        }
        addAmount(int a)
        {
            amount=amount+a;
        }
        void display()
        {
            cout<<"\n amount of piggi bank :"<<amount;
        }
};
int main()
{
    addAmount a1;
    a1.display();
    addAmount a2(50);
    a2.display();

}