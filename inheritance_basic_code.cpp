#include<iostream>
using namespace std;

class base{
     int a;
     public:
        int b;
        void show_a();
        void get_ab();
        int get_a();
};

class derived : public base{
    int c;
    public: 
       void mult();
       void display();
};

void base :: show_a()
{
    cout<< a << endl;
}

void base :: get_ab()
{
    a=10;
    b=5;
}

int base :: get_a()
{
    return a;
}

void derived :: mult()
{
    c=b*get_a();
}

void derived :: display()
{
    cout<<"a= "<<get_a()<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;
}

int main()
{
    derived d1;
    d1.get_ab();
    d1.show_a();
    cout<<d1.b<<endl;
    d1.b=20;
    d1.mult();
    d1.display();
}