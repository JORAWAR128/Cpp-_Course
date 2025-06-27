#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public : 
    void setdata(void){
        salary = 500;
        cout<<"enter the id of the employee"<<endl;
        cin>>id;
    }
    void getid(void){
        cout<<"the id of the employee is "<<id<<endl;
        cout<<"the salary of the employee is "<<salary<<endl;
    }
};
int main(){
    employee ep[5];
    for(int i = 0; i < 5 ; i++){
        ep[i].setdata();
        ep[i].getid();
    }

    
    return 0;
}
