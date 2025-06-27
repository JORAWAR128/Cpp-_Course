// जय माँ आशापुरा 
// this program is for practice to create a class (topic ---> Bank details of a Person)
#include<iostream>
#include<string>
using namespace std;
class BankDetails{
    private :
      string bankName;
      string AccHname;
      int accno;
      float Balance;
   
    public :
      void setAccDetails(string bn,string n ,int a, float b);
      void diposit(int amount);
      void withdraw(int amount);
      void displayAccDetails(void);  
};
void BankDetails :: setAccDetails(string bn, string n , int a , float b){
            bankName = bn;
            AccHname  = n;
            accno = a;
            Balance = b;
}
void BankDetails ::diposit(int amount){
      if(amount >0 ){
        Balance += amount ; 
        cout<<"the amount deposited from the bank is "<<amount<<" /- Rupees"<<endl;
      }
      else {
        cout<<"no depoition occured "<<endl;
      }
}
void BankDetails :: withdraw(int amount){
      if(amount >0 ){
        Balance -= amount;
        cout<<"the amount withdrawed from the bank is "<<amount<<" /-"<<endl;
      }
      else {
        cout<<"no amount is withdrawled from the bank"<<endl;
      }
}
void BankDetails :: displayAccDetails(void){
     cout<<"the bank name is "<<bankName<<endl;
     cout<<"the account holder name is "<<AccHname<<endl;
     cout<<"the account number is "<<accno<<endl;
     cout<<"the balance availabLe is "<<Balance<<endl;
}

int main(){
    BankDetails customer;
    cout<<"the bank details of a customer are"<<endl;
    customer.setAccDetails("IDBI", "JORAWAR SINGH", 2024788, 51000);
    customer.displayAccDetails();
    cout<<"some transactions are occured now "<<endl;
    customer.diposit(500);
    customer.withdraw(500);
    customer.displayAccDetails();
    return 0;

    
}