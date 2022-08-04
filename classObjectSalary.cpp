#include<iostream>
using  namespace std;
class Employee
{
    private:
            int bs,hra=0,da=0,grosssalary=0;
            int eid;
            char ename[20];
            float esalary;
    public:
    
        void accept();
        void display();

};
    void Employee :: accept()
        {
            cout<<"\n enter eid =:";
            cin>>eid;
            cout<<"\n enter ename =:";
            cin>>ename;
            cout<<"\n enter esalary =:";
            cin>>esalary;
            cout<<"\n enter bs =:";
            cin>>bs;
        }
    void Employee :: display()
        {
            cout<<"\n eid ="<<eid;
            cout<<"\n ename ="<<ename;
            cout<<"\n esalary ="<<esalary;
            cout<<"\n bs ="<<bs;

            da=bs*12/100;
            hra=bs*30/100;
            grosssalary=bs+da+hra;
            cout<<"\n da ="<<da;
            cout<<"\n hra ="<<hra;
            cout<<"\n grosssalary ="<<grosssalary;
        }

int main()
{
    
     Employee E[10];
     int i,n;
     cout<<"\n enter the details";
     cin>>n;
     for(i=1;i<=n;i++)
     {
         E[i].accept();
     }
     for(i=1;i<=n;i++)
     {
         E[i].display();
     }
     return 0;
     
     
 
}