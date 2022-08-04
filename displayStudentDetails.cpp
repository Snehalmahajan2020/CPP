#include<iostream>
using namespace std;
class student
{
    private:
        int rollno;
        string name,address;
        float per;
    public:
        void accept()
        {
            cout<<"\n enter rollno =";
            cin>>rollno;
            cout<<"\n enetr name =";
            cin>>name;
            cout<<"\n enter address =";
            cin>>address;
            cout<<"\n entre percentage =";
            cin>>per;
        }
        void display()
        {
            cout<<"\n rollno ="<<rollno;
            cout<<"\n name ="<<name;
            cout<<"\n address ="<<address;
            cout<<"\n percentage ="<<per;

        }
};
int main()
{
    student s1;
    s1.accept();
    s1.display();
}