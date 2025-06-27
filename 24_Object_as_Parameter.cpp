//for a complex number
#include<iostream>
using namespace std;
   class complex{
    int a ;
    int b;
    public :
     void setdata(int j1 , int j2){
        a = j1;
        b = j2;
     }
     void setdatasum(complex o1 , complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
     }
     void display(){
        cout<<"the complex number is "<<a<<" + "<<b<<" i"<<endl;
     }
   };
   int main(){
    complex s1,s2,s3;
    s1.setdata(4,7);
    s1.display();
    cout<<endl;
    s2.setdata(7,4);
    s2.display();
    cout<<endl;
    s3.setdatasum(s1,s2);
    s3.display();
    cout<<endl;

    return 0;
}
