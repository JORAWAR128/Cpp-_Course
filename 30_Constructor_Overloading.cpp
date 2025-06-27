// constructor overloading and complex numer of users wishhhhhhhh

#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void){
        
       int x, y;
        cout << "enter your own value of a and b where a is real and b is imaginary  " << endl;
        cin >> x >> y;
        a = x;
        b = y;
    }
    complex(char h , int y = 0)
    {
        int x;
        cout << "enter your own value of a and let b be zero " << endl;
        cin >> x;
        a = x;
        b = y;
    }

    void printcomplex()
    {
        cout << "your complex number is " << a << " + i " << b << endl;
    }
};
int main()
{
    complex c, k('l'), j('c');
c.printcomplex();
    k.printcomplex();
    j.printcomplex();

    return 0;
}
