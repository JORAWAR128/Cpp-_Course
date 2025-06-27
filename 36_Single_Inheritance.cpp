#include <iostream>
using namespace std;
class employee
{ // this is a base class
public:
    int id;
    float salary = 5000;
    employee() {}
    employee(int idnum)
    {
        id = idnum;
    }
    void getdata()
    {
        cout << "id is " << id << " and salary is " << salary << endl;
    }
};
/*
 syntax of derived class
  class {{derived-class-name}} : {{visibility-mode}}  {{base-class-name}}
  {
  class members/functions / etc......
  }
  */

// creating a programmer class of base class employee
// private members of base class will never become the members of derived class and are not inherited
// public are only inherited that also through the visibility code
// if visibility code is not declared then , by default the visibility code becomes private
class programmer : public employee
{
public:
    programmer(int idnum)
    {
        id = idnum;
    }
    void getsalary()
    {

        cout << "the salary of the programmer is " << salary << endl;
    }
};

int main()
{
    employee jorsa(7), sohan(3);
    jorsa.getdata();
    sohan.getdata();
    programmer mehul(6);
    cout << "id of the programmer is " << mehul.id << endl;
    ;
    mehul.getsalary();

    return 0;
}
