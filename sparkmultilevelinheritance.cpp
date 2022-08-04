#include<iostream>
using namespace std;
class spark
{
    protected:
        int sid;
        string sname;
        float sfees;
    public:
        void accept()
        {
            cout<<"\n enter id =";
            cin>>sid;
            cout<<"\n enter name =";
            cin>>sname;
            cout<<"\n enter fees =";
            cin>>sfees;
        }
};
class android:public spark
{
    protected:
        int aid;
        string aname;
        float aprice;
    public:
        void get()
        {
            cout<<"\n aid";
            cin>>aid;
            cout<<"\n aname";
            cin>>aname;
            cout<<"\n aprice";
            cin>>aprice;
        }

};
class apps:public android
{
    protected:
        int id;
        string name;
    public:
        void getdata()
        {
            cout<<"\n enter application id =";
            cin>>id;
            cout<<"\n enter name =";
            cin>>name;
        }
        void putdata()
        {
            cout<<"\n sid"<<sid;
            cout<<"\n sname"<<sname;
            cout<<"\n sfees"<<sfees;
            cout<<"\n aid"<<aid;
            cout<<"\n aname"<<aname;
            cout<<"\n aprice"<<aprice;
            cout<<"\n id"<<id;
            cout<<"\n name"<<name;
        }
};
int main()
{
    apps a1;
    a1.accept();
    a1.get();
    a1.getdata();
    a1.putdata();

    return 0;
}