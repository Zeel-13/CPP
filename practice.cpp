#include<iostream>
#include<algorithm>
using namespace std;
struct activity{
    int start,end;
};
bool comp(activity act1,activity act2){
    return (act1.end < act2.end );
}
void maxactivity(activity act[], int n)
{
    sort(act, act+n, comp);
    cout<<"selected activities are: "<<endl;
    int i=0;
    cout<<"activity: "<<i<<" ,start:"<<act[i].start<<" end:"<<act[i].end<<endl;
    for(int j=1;j<n;j++){
        if(act[j].start>=act[i].end){
            cout<<"activity: "<<j<<" ,start:"<<act[j].start<<" end:"<<act[j].end<<endl;
            i=j;
        }
    }
}
int main()
{
    activity actArr[]={{5,9},{1,2},{3,4},{0,6},{5,7},{8,9}};
    int n=6;
    maxactivity(actArr,n);
    return 0;
}



