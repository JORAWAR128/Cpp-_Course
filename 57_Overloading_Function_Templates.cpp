#include<iostream>
using namespace std;
template<class t>
class jorawar{
    public:
     t a ;
     jorawar(t a){
        this->a = a;
     }
    void display(){
        cout<<"The value of a is "<<a<<endl;
    }
};
 void func(int a){
        cout<<"this is normal function "<<a<<endl;
     }
template<class t>
void func1(t a){
    cout<<"This is template function  ."<<a<<endl;
}
int main(){

  // jorawar<int>obj(85);
  // obj.display();
  func(5);      // Exact match takes the highest priority.
    return 0;
}
