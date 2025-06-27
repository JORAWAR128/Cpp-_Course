#include <iostream>
#include <string>
using namespace std;
class piet
{

public:
    int enroll, div, rollno;
    string department, branch, name;
    void enterdetails()
    {
        string n;
        int ug;
        string d;
        string b;
        int D;
        int r;

        cout << "enter your full name " << endl;
        cin >> n;
        cout << "enter your enrollment number " << endl;
        cin >> ug;
        cout << "enter your department " << endl;
        cin >> d;
        cout << "enter the branch " << endl;
        cin >> b;
        cout << "enter your division " << endl;
        cin >> D;
        cout << "enter your roll number " << endl;
        cin >> r;

        name = n;
        enroll = ug;
        department = d;
        branch = b;
        div = D;
        rollno = r;
    }
};
class student : public piet
{
public:
    string pass, cpass;
    void setpassword()
    {
        int attempts = 2;
while (attempts--) {
    cout << "Enter your new password: ";
    cin >> pass;
    cout << "Confirm your password: ";
    cin >> cpass;
    if (pass == cpass) {
        cout << "Your new password is " << pass << endl;
        break;
    }
    cout << "Passwords do not match! Try again." << endl;
}
if (pass != cpass) {
    cout << "Too many incorrect attempts. Try again later!" << endl;
}

    }

    void displaydetails()
    {
        cout << "NAME : " << name << endl;
        cout << "enrollment number : 240303" << enroll << endl;
        cout << "DEPARTMENT : " << department << endl;
        cout << "BRANCH : " << branch << endl;
        cout << "division : " << div << endl;
        cout << "ROLL NUMBER :" << rollno << endl;
        cout<<"\n";
    }
    void displaynewpass()
    {
        cout << "PASSWORD : " << pass << endl;
    }
};

int main()
{
    int i;
    cout << "welcome to the GNUMS of parul university " << endl;
    cout << " for new registration and to fill your details , ENTER 1 " << endl;
    cout << "to change your MIS password , ENTER 2" << endl;
    cin >> i;
    if (i == 1 || i == 2)
    {
        if (i == 1)
        {
            student k;
            k.enterdetails();
            cout<<"\n";
                    cout<<"KINDLY CHECK YOUR ALL THE DETAILS "<<endl;
            k.displaydetails();
    
        }
        else if (i == 2)
        {
            student f;
            cout<<"To reset the password , we need to verify your details , please fill the following details"<<endl;
            f.enterdetails();
            cout<<"\n";
            f.setpassword();
            cout<<"\n";

            f.displaydetails();
            f.displaynewpass();
        }
    }
    else
    {
        cout << "incorrect entry !! please enter either 1 or 2 " << endl;
    }

    return 0;
}
