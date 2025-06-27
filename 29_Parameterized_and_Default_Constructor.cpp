#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void);         // default constructor
    complex(int f, int p); // parametarised constructor
    void printnumber()
    {
        cout << "your complex number is " << a << " +  " << b<<" i" << endl;
    }
};
complex ::complex(void)
{ // this is a default constructor which dont take parameters
    a = 10;
    b = 5;
}
complex ::complex(int f, int p)
{ // this is a parametarised constructor which takes parameters
    a = f;
    b = p;
}
int main()
{
    complex s, z(4, 5);
    s.printnumber();
    z.printnumber();

    return 0;
}
