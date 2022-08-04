#include<iostream>
using namespace std;
class hospital
{
    protected:
            string name,address;
            float contact_no;
    public:
        void accept()
        {

        cout<<"\n enter name :";
        cin>>name;
        cout<<"\n enter address :";
        cin>>address;
        cout<<"\n enter contact_no :";
        cin>>contact_no;
        }
};
    class patient : public hospital
{
    protected:
            int patient_id;
            string patient_name;
    
    public:
    void get()
    {
        cout<<"\n enter patient id =";
        cin>>patient_id;
        cout<<"\n enter patient name =";
        cin>>patient_name;
    }
};
    class bill : public patient
{
    protected:
        int bdate,bamount;
    public:
        void getdata()
        {
            cout<<"\n enter bill date =";
            cin>>bdate;
            cout<<"\n enter bill amount =";
            cin>>bamount;
        }
       void putdata()
        {
            cout<<"\n name"<<name;
            cout<<"\n address"<<address;
            cout<<"\n contact no"<<contact_no;
            cout<<"\n patient id"<<patient_id;
            cout<<"\n patient name"<<patient_name;
            cout<<"\n bill date"<<bdate;
            cout<<"\n bill amount"<<bamount;
        }
};
int main()
{
    bill b1;
    b1.accept();
    b1.get();
    b1.getdata();
    b1.putdata();
}