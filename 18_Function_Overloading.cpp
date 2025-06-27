#include<iostream>
using namespace std;
int sum(int a , int b ){
    return (a+b);
}
int sum(int a , int b, int c){ 
    return (a + b +c );
}
    // we will try with a overloaded function
    int volume(double r , int h ){
        return (3.14*r*r*h);
    }
    int volume(int a){
        return (a*a*a);
    }
    int volume(int l , int  b , int h ){
        return (l*b*h);
    }


int main(){
  
    // function overloading _---> means the functions of same name 
    //                            used with difference of variables 
    cout<<"the sum of 5  , 6 is "<<sum(5 ,6)<<endl;
    cout<<"the sum of 5,6,7 is "<<sum(5,6,7)<<endl;
    cout<<"the volume of cylinder of radius 3 and height 6 is "<<volume(4 , 6)<<endl;
    cout<<"the volume of the cube of side 4 is "<<volume(4)<<endl;
    cout<<"the volume of cuboid with length 3 , breadth 7 , height 6 is "<<volume(3,7,6)<<endl;

    return 0;
}