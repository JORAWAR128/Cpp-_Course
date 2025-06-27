// a copy constructor is used to give the value of one object to the another objectn


#include<iostream>
using namespace std;
class room{
    int mem ;
    static char alpha ;
    public: 
    room(){}
    room(int i){
        mem= i;
    }
    void displaymem(){
        cout<<"there are "<<mem<< " members in room "<<alpha<<endl;
        alpha++;
    }


// creating a copy constructor 
 room(room &obj){
     mem = obj.mem;
     cout<<"copy constructor is used here "<<endl;
 }
};
char room::alpha = 'A';
int main(){
    room A(5) , B(8) , C(10) ;
    A.displaymem();
      B.displaymem();
        C.displaymem();  // note :: if we declare D in upper part with A, B and C , then copy constructor is not invoked . 
        room D(C);  // or else  """" room D  = C; """"  ,, both are correct .
        D.displaymem();   // both object and the object value should be declared in same line .
    return 0;
}

// if we comment out the copy constructor also , the compiler recognises the D through its own copy constructor .