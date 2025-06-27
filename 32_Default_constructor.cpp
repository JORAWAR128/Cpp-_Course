#include<iostream>
using namespace std;
class bankmoney{
    int amount ;
    int years ;
    float interestrate ;
    float totalmoney;
    public:
   // bankmoney(){}
    bankmoney(int a , int y  , float i ){
        amount  = a ;
        years = y ;
        interestrate = i ;
        totalmoney = amount; 
        for(int i =0  ; i < y ; i++){
         totalmoney = totalmoney*(1 + interestrate) ;
        }
    }

        
       
         void printdata(){
            cout<<"you have given rupess "<<amount<<" to the bank for "<<years<<" MONTHS ."<<endl;
            cout<<"after "<<years<<" MONTHS , your given amount have converted to "<<totalmoney<<" rupess with the interest of "<<interestrate<<" %"<<endl;
         }
};
int main(){
     bankmoney bd(500000 , 12 , .02);

bd.printdata();


    
     return 0;
}
