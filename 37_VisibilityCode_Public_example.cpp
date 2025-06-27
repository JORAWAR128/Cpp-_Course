// this is an example of single inheritance
// we learnt how to call even private member of base class into derived class using functions
#include <iostream>
using namespace std;
class base
{
    int i; // this is private and not interitable
public:
    int j;
    void setdata()
    {
        i = 10;
        j = 20;
    }
    int getdata1(); // we use this function to include data1 i.e i in derived class
};
int base ::getdata1()
{
    return i;
}

class derived : public base
{ // class is derived publically
    int k;

public:
    void process();
    void display();
};
void derived ::process()
{
    k = j * getdata1();
}
void derived ::display()
{
    cout << "value of i is " << getdata1() << endl;
    cout << "value of j is " << j << endl;
    cout << "value of k is " << k << endl;
}
int main()
{
    derived f;
    f.setdata();
    f.process();
    f.display();

    return 0;
}
