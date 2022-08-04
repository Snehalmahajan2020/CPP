#include<iostream>
using namespace std;
class person
{
    protected:
        int pid;
        string pname;
    public:
    void accept()
    {
        cout<<"\n enter pid";
        cin>>pid;
        cout<<"\n enter pname";
        cin>>pname;
    } 
};
class employee : public person
{
    protected:
        int bs,hra,da,ta,grosssalary;
    public:
        void get()
        {
            cout<<"\n enter basic salary";
            cin>>bs;
        }
        void calculate()
        {
            hra=bs*30/100;
            da=bs*12/100;
            ta=bs*5/1002;
            grosssalary=hra+da+bs+ta;
        }
        void put()
        {

            cout<<"\n enter pid ="<<pid;
            cout<<"\n enter pname ="<<pname;
            cout<<"\n enter hra ="<<hra;
            cout<<"\n enter da ="<<da;
            cout<<"\n enter ta ="<<ta;
            cout<<"\n enter grosssalary ="<<grosssalary<<"\n";
            
            
        }
};
int main()
{
    employee e1;
    e1.accept();
    e1.get();
    e1.calculate();
    e1.put();
}