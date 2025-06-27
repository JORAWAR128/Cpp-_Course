// This pointer in c++ 
#include<iostream>
using namespace std;
class sight{
    float num;
    public : 
    //  void setsight(float num){
    //    this-> num = num ;
    //  }

    sight& setsight(float num){
        this->num= num;
        return *this;
    }
     void getdata(){
        cout<<"You are having Eye sight of Number "<<num<<endl;
     }
};
int main(){
    sight glass;
    glass.setsight(0.75).getdata();
    // glass.getdata();
    return 0;
}
