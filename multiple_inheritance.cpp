#include<iostream>
using namespace std;

class base1
{
   protected:
      int b1;
   public:
      void getdata_base1(int x)
      {
        b1=x;
      }
};

class base2
{
   protected:
      int b2;
   public:
      void getdata_base2(int x)
      {
        b2=x;
      }
};

class derived : public base1 , public base2
{
   protected:
      int b3;
   public:
      void sum()
      {
        b3=b1+b2;
      }
      void show()
      {
        sum();
        cout<<"value of b1 is : "<<b1<<endl;
        cout<<"value of b2 is : "<<b2<<endl;
        cout<<"value of b3 is : "<<b3<<endl;
      }
};

int main()
{
    derived zeel;
    zeel.getdata_base1(15);
    zeel.getdata_base2(25);
    zeel.show();
}


