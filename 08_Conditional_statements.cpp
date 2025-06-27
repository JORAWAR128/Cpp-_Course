#include<iostream>
using namespace std;
int main(){
    // selection structures --->> if else ladder
  int age;
 cout<<"tell me your age"<<endl;
  cin>>age;
 if((age<18) && (age>0)){
 cout<<"you cannont come to my party"<<endl;
 }
 else if(age==18){
  cout<<"you are a kid and you will get the kid pass in the party"<<endl;
 }
 else if(age<1){
    cout<<"you are not born yet"<<endl;
 }
 else{
    cout<<"you can come to the party"<<endl;
 }

    // selection structures --->> switch case
    switch (age)
    {
       case 18:
       cout<<"you are 18"<<endl;
       break;
       case 22:
       cout<<"you are 22"<<endl;
       break;
       case 2:
       cout<<"you are 2"<<endl;
       break;
       
       default:
       cout<<"no special cases"<<endl;
       break;
       }
 

    return 0;
}