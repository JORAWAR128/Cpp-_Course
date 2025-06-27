#include <iostream>
using namespace std;
class c2;
class c1
{
    int val;
    friend void swap(c1 &X, c2 &Y);

public:
    void setdata(int a)
    {
        val = a;
    }
    void getdata()
    {
        cout << "the value of c1 is " << val << endl;
    }
};
class c2
{
    int val1;
    friend void swap(c1 &X, c2 &Y);

public:
    void setdata(int b)
    {
        val1 = b;
    }
    void getdata()
    {
        cout << "the value of c2 is " << val1 << endl;
    }
};
void swap(c1 &X, c2 &Y)
{
    int temp = X.val;
    X.val = Y.val1;
    Y.val1 = temp;
    cout << "after swapping the value of c1 is " << X.val << " and the value of c2 is " << Y.val1 << endl;
}
int main()
{
    c1 j;
    c2 k;
    j.setdata(6);
    j.getdata();
    k.setdata(9);
    k.getdata();
    swap(j, k);

    return 0;
}
