#include<iostream>
#include<string>
using namespace std;
struct student {
    string name;
    float marks;
};
int main(){
    int n ;
     cout<<"Enter number of students "<<endl;
     cin>>n; 
    student * class4 = new student[n];
    for(int i = 0 ;i < n ; i++){ 
         cout<<"Enter details of student "<<i+1<<endl;
         cout<<"Name : "<<endl;
         cin>>class4[i].name;
         cout<<"Marks : "<<endl;
         cin>>class4[i].marks; 
         cout<<"Details of student "<<i+1<<"saved succesfully ."<<endl;
     }
     cout<<"\n\n\n\n";

    for(int i = 0 ;i < n ; i++){ 
         cout<<"Details of student "<<i+1<<endl;
         cout<<"Name : "<<class4[i].name<<endl;
         cout<<"Marks : "<<class4[i].marks<<endl;
     }
        delete [] class4;
    return 0;
}
