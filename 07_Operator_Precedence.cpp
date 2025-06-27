#include<iostream>
#include<iomanip>

using namespace std;
int main(){
   int a = 34;
    cout<<"the value of a was "<<a<<endl;
    a = 75;
    cout<<"the value of a is "<<a<<endl;

    //constants in c++
    const float a = 3.11;
    cout<<"the value of a was "<<a<<endl;
    a = 75;     // you will get an error because a already exist and u used const 
    cout<<"the value of a is "<<a<<endl;

    //including iomanip file and setw is a manupilator
/* int a = 90, b = 20, c=912;
 cout<<"the value of a is" <<setw(8)<<a<<endl;
 cout<<"the value of b is"<<setw(8)<<b<<endl;
 cout<<"the value of c is"<<setw(8)<<c<<endl;
 */

//operator precedence
int a = 3, b = 5;
//int c = (a*5)+b;
int c = ((((a*5)+b)-45)+87);

 cout<<c;


    return 0;
}