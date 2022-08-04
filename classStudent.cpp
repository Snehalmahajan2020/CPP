#include<iostream>
using namespace std;
class student
{
    private:
            int srollno;
            char sname[20];
            float spercentage;

    public :
        void accept();
        void display();
};
void student :: accept()
 {
            cout<<"\n enter rollno =";
            cin>>srollno;
            cout<<"\n enter name =";
            cin>>sname;
            cout<<"\n enter percentage =";
            cin>>spercentage;
 }
 void student :: display()
 {
     cout<<"\n srollno ="<<srollno;
     cout<<"\n sname ="<<sname;
     cout<<"\n spercentage ="<<spercentage;

     if(spercentage>=70 && spercentage<=100)
    {
        printf("\n distinction");
    }
       else if(spercentage>=50 && spercentage<70)
        {
            printf("\n first class");
        }
       else if(spercentage>=40 && spercentage<50)
       {
           printf("\n second class");
       }
       else 
       {
           printf("\n FAIL");
       }
 }
 int main()
 {
     student s[100];
     int i,n;
     cout<<"\n enter the details";
     cin>>n;
     for(i=1;i<=n;i++)
     {
         s[i].accept();
     }
     for(i=1;i<=n;i++)
     {
         s[i].display();
     }
     return 0;
     
     
 }
