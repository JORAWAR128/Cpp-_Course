// visibility code is private ,  so public members of base are  private in derived so we cannot call setdatafunction directly in the msin function
// so we call it in the process function only

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
    int getdata1();
};
int base ::getdata1()
{
    return i;
}

class derived : private base
{ // class is derived privately
    int k;

public:
    void process();
    void display();
};
void derived ::process()
{
    setdata();
    k = j * getdata1();
}
void derived ::display()
{
    cout << "value of i is " << getdata1() << endl;
    cout << "value of j is " << j << endl;
 //   cout << "value of k is " << k << endl;
}
int main()
{
    base h;
    h.setdata();
    derived f;
  //  f.process();
    f.display();

    return 0;
}

