#include<iostream>
using namespace std;
class reverseno
{
    private:
            int number,r=0;
    public:
        void accept()
        {

        cout<<"\n enter the number";
        cin>>number;
        r=rev(number);
        cout<<"\n Reverse number ="<<r;
        }
    int rev(int n)
    {
        int rem,r=0;
        while(n!=0)
        {
            rem = n%10;
            r = (r * 10) + rem;
            n = n/10;
        }
        return r;
    }
};
int main()
{
    reverseno r1;
    r1.accept();
}