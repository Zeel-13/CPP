#include <iostream>
using namespace std;

class complex
{
    int real;
    int img;

public:
    void getdata(int x, int y)
    {
        real = x;
        img = y;
    }
    complex sum(complex p)
    {
        complex temp;
        temp.real = real + p.real;
        temp.img = img + p.img;
        return temp;
    }
    // void sum (complex p,complex q)
    // {
    //     real = p.real + q.real;
    //     img = p.img + q.img;
    // }
    void print()
    {
        cout << "your complex number is : " << real << "+" << img << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.getdata(2, 5);
    c1.print();
    c2.getdata(7, 11);
    c2.print();
    c3=c1.sum(c2);
    c3.print();
    // c3.sum(c1 ,c2);
    // c3.print();
}
