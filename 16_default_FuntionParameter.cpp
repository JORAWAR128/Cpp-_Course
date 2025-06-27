#include<iostream>
using namespace std;
 int product(int a , int b){
    // dont use the inline function for the below static varaibles
   // static int c = 0; //this execute only once
   // c++;   //next time this function is run ,the value of c will be retained
   // return a*b+c;
   return a*b;
}

float money( int currentAmount , float factor = 1.04){
    return currentAmount*factor;
}
// int strlen(const char *p){

 //}
int main(){
    int j;
    cout<<"enter j "<<endl;
    cin>>j;
  //  cout<<"the product of a and b is  "<<product(a,b)<<endl;
    cout<<"if u have an amount of "<<j<<" then you will receive an amount of "<<money(j)<<"after 1 year"<<endl;
    cout<<"if u are VIP and u have an amount of "<<j<<" then you will receive an amount of "<<money(j,1.10)<<"after 1 year";
    return 0;
}