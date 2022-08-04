#include<iostream>
using namespace std;
class fact
{
    int i,n,factorial;
        public:
        fact(int x)
        {
            n=x;
            factorial=1;
        }
        fact(fact &x)
        {
            n=x.n;
            factorial=1;
        }
        void calculate()
        {
            for(i=1;i<=n;i++)
            {
                factorial=factorial*i;
            }
        }
        void display()
        {
            cout<<"\n factorial ="<<factorial;
        }
};
int main()
{
    int x;
    cout<<"\n enter value =";
    cin>>x;
    fact f1(x);
    f1.calculate();
    f1.display();

    fact f2(f1);
    f2.calculate();
    f2.display();

    return 0;
}