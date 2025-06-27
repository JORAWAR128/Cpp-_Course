#include <iostream>
#include <string>
using namespace std;
class bank
{
protected:
    string Bname;
    string Acchname;
    string accno;

public:
  static  char count;
  static void alpha();
    bank(){}
    bank(string b, string a, string n)
    { 
        Bname = b;
        Acchname = a;
        accno = n;
        cout << "Constructor of BANK(virtual base class) class is called" << endl;
    }
    void accountd()
    {
        cout << "Bank name is " << Bname << endl;
        cout << "Customer name is " << Acchname << endl;
        cout << "Account number : " << accno << endl;
    }
};
char bank :: count ='A';
void bank :: alpha(){
    cout<<"the serial number of the customer is "<<count<<endl;
    count++;
}
class saving : virtual public bank
{
protected:
    int sbal;

public:
    saving(int s)
    {
        sbal = s;
        cout << "Constructor of SAVING (derived class but base of ACCOUNT class) is called " << endl;
    }
    void sBalance()
    {
        cout << "Your Balance in Saving Acoount(AccNo : " << accno << " ) is " << sbal << endl;
    }
};
class current : virtual public bank
{
protected:
    int cbal;

public:
    current(int c)
    {
        cbal = c;
        cout << "Constructor of Current (derived class but base of ACCOUNT class) is called " << endl;
    }
    void cBalance()
    {
        cout << "Your Balance in Current Acoount(AccNo : " << accno << " ) is " << cbal << endl;
    }
};
class account : public saving, public current // constructor works in form of here class declaration of saving and current .
{

protected:
    int totalbal;

public:
    account(string q, string w, string e, int r, int t) : bank(q, w, e), saving(r), current(t)
    {
        totalbal = sbal + cbal;
        cout << "Constructor of Derived Class of Hybrid INheritance is called " << endl;
    }
    void tbal()
    {
        cout << "Your Total Balance Including Both Saving And Current Account is " << totalbal << endl;
    }
    void display()
    {   alpha();
        cout << "Account Details " << endl;
        accountd();
        sBalance();
        cBalance();
        tbal();
        cout<<"Thank you for choosing "<<Bname<<" Bank ."<<endl;
        cout<<"connect us through : "<<endl;
        cout<<"instagram : "<<Bname<<"INDIAOFFICIAL ."<<endl;
        cout<<"\n\n\n\n";
    }
};
int main()
{
    account customer1("IDBI", "JORAWAR SINGH", "2403031460131", 515000, 485000);
    customer1.display();
    account customer2("YES" , "DILPREET SINGH" , "35624128952" , 95362 , 63485);
    customer2.display();
    return 0 ;
}