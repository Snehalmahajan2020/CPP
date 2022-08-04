#include<iostream>
using namespace std;
class student
{
    private:
    int srollno;
    char sname[20];
    float percentage;

    public:
        void accept();
        void display();

};
void student ::accept()
{
        cout<<"\n enter rollno :";
        cin>>srollno;
        cout<<"\n enter name :";
        cin>>sname;
        cout<<"\n enter percentage :";
        cin>>percentage;
        
       
}
void student ::display()
{
        cout<<"\n enter rollno :"<<srollno;
        cout<<"\n enter name :"<<sname;
        cout<<"\n enter percentsge :"<<percentage;

        if(percentage>=70 && percentage<=100)
        {
            cout<<"\n distinction ";
        }
        else if(percentage>=60 && percentage<=70)
        {
            cout<<"\n first class ";

        }
        else if(percentage>=40 && percentage<=60)
        {
            cout<<"\n second class ";
        }
        else
        {
            cout<<"\n it is fail ";
        }
        
        
}
int main()
{
    student s1[100];
    int i,n;
    cout<<"\n enter details :";
    cin>>n;
    for ( i = 1; i < n; i++)
    {
        s1[i].accept();
    }
    for( i = 1; i < n; i++)
    {
        s1[i].display();
    }
    return 0;
}