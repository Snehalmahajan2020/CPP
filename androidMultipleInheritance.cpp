#include<iostream>
using namespace std;
class android
{
    protected:
          int a_id;
          string a_name;
          float a_price;
    public:
        void accept()
        {
            cout<<"\n enter android id =";
            cin>>a_id;
            cout<<"\n enter android name =";
            cin>>a_name;
            cout<<"\n enter android price =";
            cin>>a_price;
        }
};
class iphone
{
    protected:
        int apple_id;
        string apple_name;
        float apple_price;
    public:
        void get()
        {
            cout<<"\n enter apple id =";
            cin>>apple_id;
            cout<<"\n enter apple name =";
            cin>>apple_name;
            cout<<"\n enter apple price =";
            cin>>apple_price;
        }
};
class application:public android,public iphone
{
    protected:
        int 
    public:
        void getdata()
        {
            
        }
};
int main()
{
    appliction a1;
    a1.accept();
    a1.get();
    a1.getdata();

    return 0;
}
