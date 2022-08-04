#include<iostream>
using namespace std;
class vcube
{
    private:
    int volume,side;
    public:
    vcube()
    {
        cout<<"\n default constructor ";
        side=2;
    }
    vcube(int s1)
    {
        cout<<"\n parameterized constructor ";
        side=s1;
    }
    vcube(vcube &obj)
    {
        cout<<"\n copy constructor ";
        side=obj.side;
    }
    int volumeOfCube()
        {
            volume=side*side*side;
            cout<<"\n volume of cube ="<<volume;
        }
    
    
};
int main()
{
    vcube v1;
    v1.volumeOfCube();
    vcube v2(4);
    v2.volumeOfCube();
    vcube v3(v1);
    v3.volumeOfCube();

    return 0;
}