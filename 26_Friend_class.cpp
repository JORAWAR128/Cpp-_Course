#include <iostream>
using namespace std;
class complex;
class realcomplex
{
public:
    int sumrealcomp(complex, complex);
    int sumimaginarycomp(complex, complex);
};
class complex
{
    int a, b;
    friend int realcomplex ::sumrealcomp(complex, complex);
    friend int realcomplex ::sumimaginarycomp(complex, complex);

public:
    void setdata(int f, int g)
    {
        a = f;
        b = g;
    }
    void getdata()
    {

        cout << "the complex number is " << a << " +" << " " << b << " i" << endl;
    }
};
int realcomplex :: sumrealcomp(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int realcomplex ::sumimaginarycomp(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex j, k;
    j.setdata(3, 5);
    j.getdata();
    k.setdata(6, 2);
    k.getdata();
    realcomplex real;
    int res = real.sumrealcomp(j, k);
    cout << "the sum of the real numbers from the above two complex numbers is " << res << endl;
    int res2 = real.sumimaginarycomp(j, k);
    cout << "the sum of the imaginary terms from the above two complex numbers is " << res2 << endl;
    return 0;
}
