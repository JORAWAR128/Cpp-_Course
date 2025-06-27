#include<iostream>
using namespace std;
int factorial (int n ){
    if (n <2){
        return 1;
    }
     return n * factorial (n-1);
     }
     int fib(int j ){
        if (j <2){
            return 1;
        }
         return fib(j-2) + fib( j-1);
     }
    
     //factorial(4) = 4 * factorial(3)
     //              = 3 * factorial(2)
     // and so on 
     // it takes many times the function runs 
int main(){

    //fatorial of a number 
    // 6! = 6*5*4*3*2*1 = 720
    //by definition : factorial of 0 = 1 and 1 = 1
    // n! = n * (n-1)!
    int a ;
    int j ;
    cout<<"enter a "<<endl;
    cin>>a;
    cout<<"the factiroal of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"enter j "<<endl;
    cin>>j;
    cout<<"the value in fibonacci series at the term "<<j<<" is "<<fib(j)<<endl;

    
    return 0;
}
