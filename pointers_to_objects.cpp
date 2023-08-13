#include<iostream>
using namespace std;

class complex
{
    int real;
    int img;
    public:
       void getdata(int x , int y)
       {
          real=x;
          img=y;
       }
       void print()
       {
          cout<<real<<" + "<<img<<"i";
       }
        
};

int main()
{
    complex c1;
    complex *ptr;
    ptr=&c1;
    // (*ptr).getdata(5,9);
    // (*ptr).print();
    ptr->getdata(5,9);
    ptr->print();

}