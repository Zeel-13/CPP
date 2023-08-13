#include<iostream>
using namespace std;

class base
{
    int z;
    public:
       void getdata(int z)
       {
          this->z=z;
       }
       void print()
       {
         cout<<"z = "<<z<<endl;
       }
       base & returndata()
       {
          return *this;
       }
};
/*  “this” is a keyword that is an implicit pointer. 
    “this” pointer points to the object which calls the member function.*/
int main()
{
    base b1,b2;
    b1.getdata(99);
    b1.print();
    b2=b1.returndata();
    b2.print();
}