#include<iostream>
using namespace std;
class factorial
{
    private:
        int n,fact=1;
    public:
        void accept()
        {
            cout<<"\n enter no :";
            cin>>n;
        }
        void calculate()
        {
            while(n>1)
       
             {
                fact=fact*n;
                n--;
                
             }
             cout<<"\n factorial =:"<<fact;
        }
};
int main()
{
    factorial f1;
    f1.accept();
    f1.calculate();
}