#include<iostream>
using namespace std;
class player
{
    private:
        int pid;
        string pname;
        float psalary;
    public:
        void accept()
        {
            cout<<"\n enter id :";
            cin>>pid;
            cout<<"\n enter name :";
            cin>>pname;
            cout<<"\n enter salary :";
            cin>>psalary;
        }
        void display()
        {
            cout<<"\n pid :"<<pid;
            cout<<"\n pname :"<<pname;
            cout<<"\n psalary :"<<psalary;

        }
    
};
int main()
{
    int i,n;
    player p[100];
    cout<<"\n how many players :";
    cin>>n;
    for ( i = 0; i < 10; i++)
    {
        p[i].accept();
    }
    for ( i = 0; i < 10; i++)
    {
        p[i].display();
    }
    
    

    return 0;
}