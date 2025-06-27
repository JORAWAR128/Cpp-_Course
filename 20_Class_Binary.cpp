// a program for read , check, swap and display a binary number with class
#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;

public:
    void read(void);
    void chk_binary(void);
    void ones_compliment(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "enter a binary number" << endl;
    cin >> s;
}
void binary ::chk_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
{
    chk_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << " the binary number is " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary jorsa;
    jorsa.read();
    jorsa.chk_binary();
    jorsa.display();
    cout << endl;
    jorsa.ones_compliment();
    jorsa.display();
    return 0;
}