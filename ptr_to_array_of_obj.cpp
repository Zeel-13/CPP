#include<iostream>
using namespace std;

class bookshop
{
    int id;
    float price;
    public: 
       void getdata(int x,float y)
       {
          id=x;
          price=y;
       }
       void printdata()
       {
         cout<<"id = "<<id<<"\n";
         cout<<"price = "<<price<<endl;
       }
};

int main()
{
     int size;
     cout<<"enter no. of books : ";
     cin>>size;
     bookshop *ptr = new bookshop [size];
     bookshop *pptr = ptr;
     int p,i;
     float q;
     for(i=0;i<size;i++)
     {
        cout<<"enter details for book "<<i+1<<endl;
        cout<<"enter id : ";
        cin>>p;
        cout<<"enter price : ";
        cin>>q;
        ptr->getdata(p,q);
        ptr++;
     }
     cout<<"\n-----printing the details of all the books-----"<<"\n";
     for(i=0;i<size;i++)
     {
        cout<<"details of book "<<i+1<<endl;
        pptr->printdata();
     }
}