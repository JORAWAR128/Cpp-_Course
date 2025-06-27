#include<iostream>
using namespace std;
class base1{
    protected : 
    int a ; 
    public :
     base1(int g){
        a = g ; 
        cout<<"Base1 class Constructor is called "<<endl;

     }
     void getdata1(){
        cout<<"The value of a is "<<a<<endl;
     }

};
class base2{
 protected : 
  int  b ;
  public : 
  base2(int  l) { 
    b = l ;
    cout<<"Base2 class construtor is called "<<endl;

  }
  void getdata2(){
    cout<<"The value of b is "<<b<<endl;
  }
};
class derived : public base1  , public base2 {
    int c ;
    public : 
     derived(int q , int w , int r ) : base2(w) , base1(q){
        c = r;
        cout<<"Derived class constructor is called "<<endl;

     }
     void getdata3(){
        cout<<"The value of c is "<<c<<endl;
     }
     void getalldata(){
        getdata1();
        getdata2();
        getdata3();
     }
};

int main(){
    derived values(3 , 4 , 5);
    values.getalldata();
    
    return 0;
}
