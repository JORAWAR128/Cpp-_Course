#include<iostream>
using namespace std;
//typedef struct missing{
//    int age ;
//    float cash;
//    char shirt;
//}miss; 

union money{
    int raju;
    float golu;
    char hemu;
};
int main(){
    union money m;
    m.raju = 5999;
    cout<<m.raju<<endl;

    enum jorsaraj{golu , raju, jaggu , dilpreet, saanu };
    cout<<golu<<endl;
    cout<<raju<<endl;
    cout<<jaggu<<endl;
    cout<<dilpreet<<endl;
    cout<<(jaggu == 2)<<endl;
   /// miss rohan;
   /// rohan.age = 12;
   /// rohan.cash = 10000;
   /// rohan.shirt = 'b';
   /// cout<<"missing\nrohan"<<endl;
   /// cout<<"rohan's age is "<<rohan.age<<endl;
   /// cout<<"rohan was wearing a green tshirt on which "<<rohan.shirt<<" is written"<<endl;
   /// cout<<"rohan withdrawed the money from atm of amount  "<<rohan.cash<<endl;


    
    return 0;
}
