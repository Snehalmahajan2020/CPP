#include<iostream>
using namespace std;
class maximum
{
    private:
        int a,b;
    public:
        maximum()
        {
            cout<<"\n default constructor";
            a=6;
            b=7;
        }
        maximum(int x,int y)
        {
            cout<<"\n parameterized constructor";
            a=x;
            b=y;
        }
        maximum(maximum &obj)
        {
            cout<<"\n copy constructor";
            a=obj.a;
            b=obj.b;
        }
        void display()
        {
            if(a>b)
            {
                cout<<"\n a is max";
            }
            else
            {
                cout<<"\n b is max";
            }
        }

};
int main()
{
    maximum m1;
    m1.display();
    maximum m2(3,6);
    m2.display();
    maximum m3(m1);
    m3.display();

}
