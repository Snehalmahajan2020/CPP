#include<iostream>
using namespace std;
template <class T>
class A
{
    T a; 
    T b;
    public:
    A(T x,T y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"\n value of a :"<<a<<endl;
        cout<<"\n value of b :"<<b<<endl;
    }
};
int main()
{
    A<int> d( 4,2);
    d.display();

    A<float> d1(2.2,3.4);
    d1.display();

}