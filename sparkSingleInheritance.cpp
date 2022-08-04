#include<iostream>
using namespace std;
class spark
{
    protected:
        int s_id;
        string s_name;
    public:
        void accept()
        {
            cout<<"\n enter id =";
            cin>>s_id;
            cout<<"\n enter name =";
            cin>>s_name;
        }
};
class course :public spark
{
    protected:
        int cid;
        string cname;
        float cfees;
    public:
        void get()
        {
            cout<<"\n enter cid =";
            cin>>cid;
            cout<<"\n enter cname =";
            cin>>cname;
            cout<<"\n enter cfees =";
            cin>>cfees;
        }
        void put()
        {
            cout<<"\n id"<<s_id;
            cout<<"\n name"<<s_name;
            cout<<"\n cid"<<cid;
            cout<<"\n cname"<<cname;
            cout<<"\n cfees"<<cfees;
        }
};
int main()
{
    course c1;
    c1.accept();
    c1.get();
    c1.put();

    return 0;
}
