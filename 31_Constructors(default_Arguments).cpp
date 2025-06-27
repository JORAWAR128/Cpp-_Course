// constructor with default arguments

#include <iostream>
using namespace std;
class simple
{
    int data1, data2;

public:
    simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }
    void printnumber()
    {
        cout << "your complex number is " << data1 << " + i " << data2 << endl;
    }
};
int main()
{
    simple r(5, 6); // b is 6 now because it is declared and first preferance to declared one
    simple t(5);    // now b is not declared , so by default it becomes 9 , because we declared b =9 in function
    r.printnumber();
    t.printnumber();
    return 0;
}
