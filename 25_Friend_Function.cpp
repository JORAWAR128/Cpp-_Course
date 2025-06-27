#include<iostream>
using namespace std;
class complex{
    private: 
    int a,b;
    public :
    void setnumber(int n1 , int n2){
        a = n1 ;
        b = n2;
    }
    // below line means that sumcomplex function is allowed to to anything with my private parts 
    friend complex sumcomplex(complex o1 , complex o2);
    void printnumber(){
    cout<<"your complex number is "<<a<<" +"<<" "<<b<<" i"<<endl;
    }
    };
    complex sumcomplex(complex o1 , complex o2){
       // cout<<a; ----> invaid 
        complex o3;
        o3.setnumber((o1.a + o2.a ) , (o1.b + o2.b));
        return o3;
    }


int main(){
  complex c1, c2, sum;
  c1.setnumber(1,4);
  c2.setnumber(5,8);
  c1.printnumber();
    c2.printnumber();
    sum = sumcomplex(c1 , c2);
    sum.printnumber();
    return 0;
}



/* properties of friend functions 
1) not in the scope of class
2)  since it is not in the scope of the class it cannot be called by the object . 
  for example -----> c3.setcomplex(c1 , c2)----> invalid
  3) can be invoked without the help of any object
  4) usually contains the objects as same as arguments
  5) can be declared  inside the public or private function of the class
  6) it cannot  access the members directly by their names and need object_name.member_name to access any member . 

  */