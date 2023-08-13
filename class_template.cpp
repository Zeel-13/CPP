#include<iostream>
using namespace std;
template <class T>
class vector
{
    T *arr;
    int size;
    public:
       vector(T *v,int s)
       {
          size=s;
          arr=new T [size];
          for(int i=0;i<size;i++)
          {
            arr[i]=v[i];
          }
       }
       T operator * (vector &x)
       {
         T sum=0;
         for(int i=0;i<size;i++)
         {
            sum+=this->arr[i]*x.arr[i];
         }
         return sum;
       }
       void print()
       {
         for(int i=0;i<size;i++)
         {
            cout<<arr[i]<<"\t";
         }
         cout<<endl;
       }
};

int main()
{
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    vector<int>v1(a,3);
    vector<int>v2(b,3);
    v1.print();
    v2.print();
    int sumint= v1*v2;
    cout<<"sum ="<<sumint<<endl;
    cout<<endl;
    float c[3]={4.8,7.5,8.1};
    float d[3]={3.5,7.1,2.9};
    vector<float>v3(c,3);
    vector<float>v4(d,3);
    v3.print();
    v4.print();
    float sumfloat=v3*v4;
    cout<<"sum ="<<sumfloat<<endl;
}