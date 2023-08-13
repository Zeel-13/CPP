#include <iostream>
using namespace std;

class base
{
    int val1;

public:
    int val2;
    void getdata()
    {
        val1 = 10;
        val2 = 20;
    }
    int value1()
    {
        return val1;
    }
    int value2()
    {
        return val2;
    }
};

class derived : public base
{
    int val3;

public:
    void setvalue()
    {
        val3 = value1() * val2;
    }
    void display()
    {
        cout<<"val1 = "<<value1()<<endl;
        cout<<"val2 = "<<val2<<endl;
        cout<<"val3 = "<<val3<<endl;
    }
};

int main()
{
    derived obj;
    obj.getdata();
    obj.setvalue();
    obj.display();
    cout<<obj.val2<<endl;
}