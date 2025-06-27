#include <iostream>
#include<string>
using namespace std;
class bottle
{
protected:
    string s;

public:
    bottle(string s)
    {
        this->s = s;
    }
    virtual void display()
    {
        cout << "This is a " << s << " bottle ." << endl;
    }
};
class steelBottle : public bottle
{
    string color;

public:
    steelBottle(string color, string s) : bottle(s)
    {
        this->color = color;
    }
    void display()
    {
        cout << "This is a steel bottle of " << color << " color ." << endl;
    }
};
class plasticBottle : public bottle
{
    string color;

public:
    plasticBottle(string color, string s) : bottle(s)
    {
        this->color = color;
    }
  void display()
  {
      cout << "This is a plastic bottle of " << color << " color ." << endl;
  }
};

int main()
{
    string s = "water";
    string color = "black";
    bottle *bottles[1];
    steelBottle obj1(color, s);
    bottles[0] = &obj1;
    plasticBottle obj2(color, s);
    bottles[1] = &obj2;
    bottles[0]->display();
    bottles[1]->display();
    return 0;
} 