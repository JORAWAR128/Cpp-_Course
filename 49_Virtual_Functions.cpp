#include<iostream>
using namespace std;
class marks{
    public : 
     float totalMarks = 924;
     virtual void getdata(){
        cout<<"Your total marks is "<<totalMarks<<endl;
     }
};
class percent : public marks{
    public : 
     float percentage = (totalMarks*100)/1000 ;
     void getdata(){
        cout<<"Your total marks is "<<totalMarks<<endl;
        cout<<"Your percentage is "<<percentage<<endl;
     }
};
int main(){
    marks * resultptr;
    percent  student;
    resultptr = &student;
    resultptr->getdata();

    
    return 0;
}
