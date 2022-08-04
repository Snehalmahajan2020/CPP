#include<iostream>
using namespace std;
class worker
{
    private:
        char wname[10];
        int no_of_hrs;

    public:
    void accept()
    {
        cout<<"\n enter worker name :";
        cin>>wname;
        cout<<"\n enter no of hrs :";
        cin>>no_of_hrs;
    }
    void calculate(int rate=30)
    {
        cout<<"\n salary ="<<no_of_hrs*20*rate;
    }
};
int main()
{
    worker w1;
    w1.accept();
    w1.calculate();

    return 0;
}