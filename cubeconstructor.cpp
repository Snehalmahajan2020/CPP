#include<iostream>
using namespace std;
class volumeOfCube
{
    private:
        int volume,side;
        public:
            volumeOfCube()
            {
                cout<<"\n default constructor =";
                side=4;
            }
            volumeOfCube(int s1)
            {
                cout<<"\n parameterized constructor =";
                side=s1;
            }
            int vcube()
            {
                volume=side*side*side;
                cout<<"\n volume of cube ="<<volume;
            }
};
int main()
{
    volumeOfCube v1;
    v1.vcube();
    volumeOfCube v2(6);
    v2.vcube();

    return 0;

}