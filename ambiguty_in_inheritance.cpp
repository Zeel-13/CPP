#include<iostream>
using namespace std;

class base1
{
    public:
      void print()
      {
        cout<<"hello from base1"<<endl;
      }
};

class base2
{
    public:
      void print()
      {
        cout<<"hello from base2"<<endl;
      }
};

class derived : public base1, public base2
{
    public:
      void print()
      {
         cout<<"hello from derived"<<endl;
      }
         
};

int main()
{
    base1 b1;
    base2 b2;
    b1.print();
    b2.print();
    derived d;
    d.print();
    d.base1::print();
    d.base2::print();
}
