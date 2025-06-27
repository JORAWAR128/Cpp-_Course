#include<iostream>
using namespace std;
class employee{
    int age , id ;
    public :
    static char alpha;
     void setdata(int  a , int i ){
        age = a ;
        id = i;
     }
     void getdata(){
        cout<<"The ID of emplyee "<<alpha<<" is "<<id<<endl;
        cout<<"The age of employee is "<<age<<endl;
        alpha++;
     }
};
char employee :: alpha = 'A';


int main(){
    employee*ptr = new employee[2] ;
    (ptr)->setdata(26 , 991);
    (ptr)->getdata();
    cout<<"\n";
    (ptr+1)->setdata(26 , 991);
    (ptr+1)->getdata();
    cout<<"\n";
    (ptr+2)->setdata(26 , 991);
    (ptr+2)->getdata();
    
    return 0;
}
