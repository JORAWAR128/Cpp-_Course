
//there are two types of header files
// system header files: it comes with the compiler
#include<iostream>
//user defined header files: it is written by the programmer
//#include"this.h"this will give a error if the file(this.h) is not there in the current directory
using namespace std;
int main(){
    int a=4, b=5;
   cout<<"operators in c++:"<<endl;
   cout<<"followings are the types of operators in c++"<<endl;
   // arthematic opertors
   cout<<"the value of a+b is "<<a+b<<endl;
    cout<<"the value of a-b is "<<a-b<<endl;
     cout<<"the value of a*b is "<<a*b<<endl;
      cout<<"the value of a/b is "<<a/b<<endl;
       cout<<"the value of a%b is "<<a%b<<endl;
        cout<<"the value of a++ is "<<a++<<endl;
         cout<<"the value of a-- is "<<a--<<endl;
          cout<<"the value of ++a is "<<++a<<endl;
           cout<<"the value of --a is "<<--a<<endl;

           //assignment operators --> used to assign values to variables
           /*int a=3, b=9;
           char d='d'*/

           //comparision operators -->
             cout<<"the following are thetypes of comparision operators\n";
           cout<<"the value of a == b is"<<(a==b)<<endl;
           cout<<"the value of a > b is"<<(a>b)<<endl;
           cout<<"the value of a < b is"<<(a<b)<<endl;
           cout<<"the value of a >= b is"<<(a>=b)<<endl;
           cout<<"the value of a <= b is"<<(a<=b)<<endl;
           cout<<"the value of a != b is"<<(a!=b)<<endl;

           //logical operators
            cout<<"the following are the types of logical operators\n";
           cout<<"the value of this logical not operator : (!(a==b)) is"<<(!(a==b))<<endl;


    return 0;
}