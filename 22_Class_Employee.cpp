#include <iostream>
using namespace std;
class employee
{
    int Id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the Id" << endl;
        cin >> Id;
        count++;
    }
    void getdata(void)
    {
        cout << "the Id of the employee is " << Id << " and the employee number is " << count << endl;
    }
    static int getcount(void)
    {    // cout<<Id; // this will give error because the id variable is not a static variable
        cout << "the value of the count is " << count << endl;
    }
};
int employee ::count; // default value is 0
int main()
{
    employee suresh, ramesh, raj;
    suresh.setdata();
    suresh.getdata();
    employee ::getcount();
    ramesh.setdata();
    ramesh.getdata();
    employee ::getcount();
    raj.setdata();
    raj.getdata();
    employee ::getcount();

    return 0;
}