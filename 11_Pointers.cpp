#include<iostream>
using namespace std;
int main(){

    //what is a pointer?
   // ------>data typewhich holds the address of another data types
   int a = 5;
   int * b;
   b  = &a;
   //  &-----> address of operator
   cout<<"the adress of a is "<<b<<endl;
   cout<<"the adress of a is "<<&a<<endl;
   //value at operator / dereference of operator
    cout<<"the value of address b is "<<*b<<endl;

    //pointer to pointer
    int ** c = &b;
    cout<<"the adress of b is"<<&b<<endl;
    cout<<"the adress of b is"<<c<<endl;
    cout<<"the value at address (value_at(value_at(c)) is"<<**c<<endl;

    int ***d = &c;
    cout<<"the address of the c is "<<d<<endl;
    cout<<"the address of the c is "<<&c<<endl;
    cout<<"the value at address (value_at(value_at(value_at(d))) is "<<***d<<endl;




    return 0;
}
