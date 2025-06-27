// ambiguity resolution 
#include<iostream>
using namespace std;
class base {
     protected : 
     int a ;
     public : 
    void seta(int g ){
        a = g ;
     }
     void getdata(){
        cout<<"Value of a is "<<a<<endl;
     }
};
class derive : public base {
    protected : 
    int b ;
    public : 
   void setb(int f ){
       b = f ;
    }
    void getdata(){
        
       cout<<"Value of b is "<<b<<endl;
       base::getdata();
    }
};
int main(){
    derive j ;
    j.seta(9);
    j.setb(4);
    j.base::getdata();
    j.getdata();

    return 0;
}
