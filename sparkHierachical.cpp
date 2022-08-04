#include<iostream>
using namespace std;
class spark
{
    protected:
        int spark_code;
    public:
    void accept()
        {
            cout<<"\n enter spark code";
            cin>>spark_code;
        }
        void display()
        {
            cout<<"\n spark code"<<spark_code;
        }
};
class android : public spark
{
    protected:
        string android_name;
    public:
        void get()
        {
            cout<<"\n enter android name";
            cin>>android_name;
        }
        void put()
        {
            cout<<"\n android name"<<android_name;
        }
};
class iphone : public spark
{
    protected:
        float iphone_price;
    public:
        void getdata()
        {
            cout<<"\n enter iphone price =";
            cin>>iphone_price;
        }
        void putdata()
        {
            cout<<"\n iphone price "<<iphone_price;
        }
};
int main()
{
    android a1;
    a1.accept();
    a1.display();
    a1.get();
    a1.put();
    iphone i1;
    i1.accept();
    i1.display();
    i1.getdata();
    i1.putdata();
}