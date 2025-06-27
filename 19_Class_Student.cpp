//first program in OOPs
//creating a class 
#include<iostream>
using namespace std;
class student {
    private :
       int id , rollNumber; 
       char section;
    public :
       int division ;
       int Class;
       void setdata(int j , int k, char l);
       void getdata();
};
 void student :: setdata(int j , int k , char l ){
         id = j;
         rollNumber = k;
         section = l ;
 };
    void student :: getdata(){
       cout<<"Student id is "<<id<<endl;
        cout<<"students roll number is "<<rollNumber<<endl;
        cout<<"student is in  "<<section<<" section"<<endl;
        cout<<"division is "<<division<<endl;
        cout<<"the student is from class "<<Class<<endl;  
}; 
int main(){
     student john ;
    john.division = 1;
    john.Class = 13;
     john.setdata(44,24,'A');
     john.getdata();
    return 0;
}    
 