#include <iostream>
using namespace std;
class base
{
protected:
    int a; // protected --> can be inherited but not in main function  (private but can be inherited)
private:
    int b; // private ----> never inherited
public:
    int setB()
    {
        b = 7;
        return b;
    }
    int setsquareofB()
    {
        b = 7 * 7;
        return b;
    }
};

/* explaination of private, public, protected members in specific type of derivation
    _______________________________________________________________________________________________________
    |  memebers      |   public derivation    |    private derivation        |      protected derivation  |
    | ____________________________________________________________________________________________________|
    |  Private       |    Not Inherited       |      Not Inherited           |        Not Inherited       |
    |  Protected     |      Protected         |          private             |            protected       |
    |  Public        |      public            |          private             |            protected       |
     ______________________________________________________________________________________________________


*/
class derived : protected base
{
public:
    void display()
    {
        a = 10;
        setsquareofB();
        setB();
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << setB() << endl;
        cout << "the value of b square is " << setsquareofB() << endl;
    }
};
int main()
{
    base g;
    derived l;
    l.display();
    return 0;
}
