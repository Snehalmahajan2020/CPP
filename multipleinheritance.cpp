#include<iostream>
using namespace std;
class employee
{
    protected:
        int emp_id;
        string emp_name;
        float emp_bsalary;
    public:
        void accept()
        {
            cout<<"\n enter employee id=";
            cin>>emp_id;
            cout<<"\n enter employee name=";
            cin>>emp_name;
            cout<<"\n enter employee basic salary=";
            cin>>emp_bsalary;
        }
};
class date
{
    protected:
        int dd,mm,yy;
    public:
    void get()
    {
        cout<<"\n enter date =";
        cin>>dd;
        cout<<"\n enter month =";
        cin>>mm;
        cout<<"\n enter year =";
        cin>>yy;
    }
};
class admin:public employee,public date
{
    protected:
        int incentives,gross;
    public:
    void getdata()
    {
        cout<<"\n enter incentives =";
        cin>>incentives;
    }
    void putdata()
    {
        gross=emp_bsalary+incentives;
        cout<<"\n Gross ="<<gross;
    }
};
int main()
{
    admin a1;
    a1.accept();
    a1.get();
    a1.getdata();
    a1.putdata();
}