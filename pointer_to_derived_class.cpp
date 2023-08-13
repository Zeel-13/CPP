#include <iostream>
using namespace std;

class base
{

public:
    int var_base;
    void display()
    {
        cout<<"base class display() called"<<endl;
        cout << "displaying var_base: " << var_base << endl;
    }
};

class derived : public base 
{
   public:
   int var_derived;
   void display()
   {
    cout<<"derived class display() called"<<endl;
      cout << "displaying var_base: " << var_base << endl;
      cout << "displaying var_derived: " << var_derived << endl;
   }
};

int main()
{
    base b1;
    derived d1;
    base *ptr;
    derived *pptr;
    ptr=&d1;
    ptr->var_base=25;
    //ptr->var_derived=30; (error)
    ptr->display();
    pptr=&d1;
    pptr->var_base=50;
    pptr->var_derived=85;
    pptr->display();
}