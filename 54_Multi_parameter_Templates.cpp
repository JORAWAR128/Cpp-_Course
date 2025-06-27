#include<iostream>
using namespace std;
template<class t1 , class t2>
class data{
      t1 data1;
     t2 data2;
    public : 
    data(t1 d1 , t2 d2){
        data1 = d1;
        data2 = d2;
   }
   void display(){
    cout<<"Data1 = "<<data1<<"\nData2 = "<<data2<<endl;
   }
};
int main(){
    data<string , bool >obj("Ramesh Suthar" , true);
    obj.display();
    
    return 0;
}
