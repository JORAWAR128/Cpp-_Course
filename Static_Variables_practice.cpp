// jay maa aashapura
#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int a, b;

public:
point(){}
    static char nextalpha;
    point(int, int);
    friend point distpoint(point, point);
   //static char resetalpha()
   //{
   //    nextalpha = 'A';
   //}
    void printpoint(void)
    {
        cout << "the coordinates of the point " << nextalpha << " is (" << a << " , " << b << " )" << endl;
        nextalpha++;
    }
};
char point ::nextalpha = 'A';
point ::point(int x, int y)
{

    a = x;
    b = y;
}
point distpoint(point j, point k)
{
    float halfresult = ((k.a - j.a) * (k.a - j.a)) + ((k.b - j.b) * (k.b - j.b));
    float fullresult = sqrt(halfresult);
    cout << "the distance between the point  is ( " << j.a << " , " << j.b << " ) & (" << k.a << " , " << k.b << " ) is " << fullresult << " ." << endl;
}
int main()
{
    point A(5, 1), B(1, 6) ;

    A.printpoint();
  
    B.printpoint();

    distpoint(A ,B);

    return 0;
}