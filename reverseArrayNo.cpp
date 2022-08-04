#include<iostream>
using namespace std;
int main()
{
    int i,a[10];
    cout<<"\n enter three no :";

    for ( i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    cout<<"\n forward no :";
    for ( i = 0; i < 3; i++)
    {
        cout<<"\n forward :"<<a[i];
    }
    cout<<"\n reverse no :";
    for ( i = 3; i >=0; i--)
    {
        cout<<"\n reverse :"<<a[i];
    }
    
    
    
    return 0;
}