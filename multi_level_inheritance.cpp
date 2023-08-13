#include <iostream>
using namespace std;

class student
{
protected:
    int roll;
    char name[30];

public:
    void get_roll(int x)
    {
        roll = x;
    }
    void print_roll()
    {
        cout << "roll no. = " << roll << endl;
    }
};

class exam : public student
{
protected:
    float maths, physics;

public:
    void get_marks(int y, int z)
    {
        maths = y;
        physics = z;
    }
    void print_marks()
    {
        cout << "marks in maths are : " << maths << endl;
        cout << "marks in physics are : " << physics << endl;
    }
};

class result : public exam
{
public:
    void print_result()
    {
        print_roll();
        print_marks();
        cout << "result = " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    result zeel;
    zeel.get_roll(63);
    zeel.get_marks(92, 96);
    zeel.print_result();
}

