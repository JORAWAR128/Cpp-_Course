#include<iostream>
#include<string>
using namespace std;
class student{
    protected : 
     int rollno;
     string name;
     float percent;
     public : 
      student& setname(string name ){
            this->name = name;
            return *this;
      }
      void setdata(int roll , float p ){
        rollno = roll;
        percent = p;
  }
      void getdata(){
        cout<<"STUDENT RESULT "<<endl
            <<"Name of student : "<<name<<endl
            <<"Roll Number : "<<rollno<<endl
            <<"Percentage : "<<percent<<endl;
      }
};
int main(){
    int n,i ;
    int num ;
    float per ;
    string naam;
    cout<<"Enter the number of students ."<<endl;
    cin>>n;
    student *arr = new student[n];
   
    for(i = 0 ; i < n ; i++ ){
        cout<<"Enter details of Student "<<i+1<<" in Following order : Rollno -> Name -> Percentage."<<endl;
        cin>>num>>naam>>per;
        (arr+i)->setname(naam);
        (arr+i)->setdata(num , per);

    }
    for(i = 0 ; i < n ; i++){
        cout<<"STUDENT "<<i+1<<endl;
        (arr+i)->getdata();
    }
    delete[]arr;
    arr = NULL;
    return 0;
}
