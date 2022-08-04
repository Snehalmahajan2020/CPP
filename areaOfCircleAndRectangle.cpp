#include<iostream>
using namespace std;
int area(int,int);
double area(int);

int main()
{
    int l,b,r;
    cout<<"\n enter len and bre :";
    cin>>l>>b;
    cout<<"\n enter radius of circle :";
    cin>>r;

    cout<<"\n area of rectangle :"<<area(l,b);
    cout<<"\n area of circle :"<<area(r);

}

int area(int l,int b)
{
    return l*b;
}
double area(int r)
{
    return 3.14*r*r;
}
