#include <iostream>
using namespace std;

class base
{

public:
    int var_base=10;
    virtual void display()
    {
        cout<<"base class display() called"<<endl;
        cout << "displaying var_base: " << var_base << endl;
    }
};

class derived : public base 
{
   public:
   int var_derived=20;
   void display()
   {
    cout<<"derived class display() called"<<endl;
      cout << "displaying var_base: " << var_base << endl;
      cout << "displaying var_derived: " << var_derived << endl;
   }
};

int main()
{
    base *ptr;
    derived d1;
    ptr=&d1;
    ptr->display();
}