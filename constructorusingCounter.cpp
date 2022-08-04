#include<iostream>
using namespace std;
class counter
{
    private:
        int count;
    public:
        counter()
        {
            cout<<"\n default constructor :";
            count=0;
        }
        counter(int a)
        {
            cout<<"\n parameterized constructor :";
            count=a;
            count++;
        }
        counter(counter &obj)
        {
            count=obj.count;
            count++;
        }
        void display()
        {
            cout<<"\n counter :"<<count;

        }
};
int main()
{
    counter c1;
    c1.display();
    counter c2(1);
    c2.display();
    counter c3(c1);
    c3.display();
}