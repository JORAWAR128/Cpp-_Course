// tut53 is of theoretical explaination of POLYMORPHISM
// this code is example of POINTERS TO DERIVED CLASS ---> related to topic of polymorphism
#include <iostream>
using namespace std;
class base
{
public:
    int a = 5;
    void getdata()
    {
        cout << "value of a = " << a << endl;
    }
};
class derived : public base
{
public:
    int b = 10;
    void getdata()
    {
        cout << "Value of a = " << a << " and b = " << b << endl;
    }
};

int main()
{
    base *baseptr;
    base objB;
    derived objD;
    baseptr = &objD; // pointing base class pointer to derive class object
    baseptr->getdata();
    objD.getdata();
    derived *derivedptr;
    derivedptr = &objD;
    derivedptr->getdata();

    return 0;
}
