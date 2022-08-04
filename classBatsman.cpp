#include<iostream>
using namespace std;
class batsman
{
    private:
        int bcode;
        string bname[20];
        int innings,notout,runs;
        float batavg;
        void calcavg()
        {
            batavg=runs/(innings-notout);
        }
    public:
        void readdata()
        {
            cout<<"\n enter bcode =";
            cin>>bcode;
            cout<<"\n enter bname =";
            cin>>bname;
            cout<<"\n enter innings =";
            cin>>innings;
            cout<<"\n enter notout =";
            cin>>notout;
            cout<<"\n enter runs =";
            cin>>runs;
        }   
           void calcavg()
            {
                    cout<<"\n calculate avrg ="<<batavg;
            }
               
        void displaydata()
        {
            cout<<"\n bcode ="<<bcode;
            cout<<"\n bname ="<<bname;
            cout<<"\n innings ="<<innings;
            cout<<"\n notout ="<<notout;
            cout<<"\n runs ="<<runs;
        }
};
int main()
{
    batsman b1;
    b1.readdata();
    b1.displaydata();

    return 0;
}