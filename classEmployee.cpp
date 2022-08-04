#include<iostream>
using namespace std;
class employee
{
    private:
         int bs,hra=0,da=0,gs=0;
         int e_id;
        char e_name[10];
        float e_salary;
    public:
        void accept();
        void display();

};
    void employee ::accept()
    {
        cout<<"\n enter id :";
        cin>>e_id;
        cout<<"\n enter name :";
        cin>>e_name;
        cout<<"\n enter salary :";
        cin>>e_salary;
        cout<<"\n enter basic salary :";
        cin>> bs;

    }
    void employee :: display()
    {
        cout<<"\n e_id :"<<e_id;
        cout<<"\n e_name :"<<e_name;
        cout<<"\n e_salary :"<<e_salary;
        cout<<"\n basic salary :"<<bs;

        hra=bs*30/100;
        da=bs*12/100;
        gs=bs+hra+da;
        cout<<"\n hra :"<<hra;
        cout<<"\n da :"<<da;
        cout<<"\n gs :"<<gs;


  }
int main()
{
    employee e1[10];
    int i,n;
    cout<<"\n enter details :";
    cin>>n;
    for ( i = 1; i < n; i++)
    {
        e1[i].accept();
    }
    for( i = 1; i < n; i++)
    {
        e1[i].display();
    }
    return 0;
    
    
}