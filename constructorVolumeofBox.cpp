#include<iostream>
using namespace std;
class vbox
{
    private:
        int len,wid,hei,volume;
    public:
        vbox()
        {
            cout<<"\n default constructor";
            len=2;
            wid=3;
            hei=4;
        }
        vbox(int x,int y,int z)
        {
            cout<<"\n parameterized constructor";
            len=x;
            wid=y;
            hei=z;
        }
        vbox (vbox &obj)
        {
            len=obj.len;
            wid=obj.wid;
            hei=obj.hei;
        }
        int volumeofBox()
        {
            volume=len*wid*hei;
            cout<<"\n volume of box ="<<volume;
        }
};
int main()
{
    vbox v1;
    v1.volumeofBox();
    vbox v2(3,2,4);
    v2.volumeofBox();
    vbox v3(v1);
    v3.volumeofBox();

    return 0;
}