#include<iostream>
using namespace std;

class student
{
    protected:
        int roll_no;
    public: 
        void get_rn(int x)
        {
            roll_no=x;
        }
        void print_rn()
        {
            cout<<"roll_no = "<<roll_no<<endl;
        }
};

class test : virtual public student
{
    protected:
        float maths , chemistry;
    public:
        void get_marks(float y , float z)
        {
            maths=y;
            chemistry=z;
        }
        void print_marks()
        {
            cout<<"marks in maths = "<<maths<<endl; 
            cout<<"marks in chemistry = "<<chemistry<<endl;
        }
};

class sports : public virtual student
{
    protected:
       int score;
    public:
       void get_score(int a)
       {
          score=a;
       }
       void print_score()
       {
          cout<<"extra curicular score = "<<score<<endl;
       }
};

class result : public test , public sports
{
    int total;
    public:
       void display()
       {
          total= maths + chemistry + score;
          cout<<"\n-----PRINTING THE RESULT-----"<<endl;
          print_rn();
          print_marks();
          print_score();
          cout<<"total = "<<total<<endl;
       }
};

int main()
{
    result zeel;
    zeel.get_rn(63);
    zeel.get_marks(92.4,89.6);
    zeel.get_score(90);
    zeel.display();
}
// class student is the virtual base class