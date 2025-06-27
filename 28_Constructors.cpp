#include<iostream>
using namespace std;
class complex{
    int a  , b ;
    public:
    //creating a constructor
    complex (void);
    void printnumber (){
        cout<<"your complex number is "<<a<< " + "<<b<<" i"<<endl;

    }
   
};
 complex :: complex(void){
        a = 10 ;
        b = 5 ;
    }
int main(){
complex s;
s.printnumber();

    
    return 0;
}

