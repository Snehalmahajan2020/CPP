#include<iostream>
using namespace std;
class date
{
    private:
        int day,month,year;
    public:
        date()
        {
            cout<<"\n default constructor";
            day=13;
            month=10;
            year=1997;
        }
        date(int d,int m,int y)
        {
            day=d;
            month=m;
            year=y;
        }
        date(date &obj)
        {
            day=obj.day;
            month=obj.month;
            year=obj.year;
        }
        void display()
        {
        cout<<"\n day ="<<day;
        cout<<"\n month ="<<month;
        cout<<"\n year ="<<year;
        }
};
int main()
{
    date d1;
    d1.display();
    date d2(12,11,1999);
    d2.display();
    date d3(d1);
    d3.display();
}