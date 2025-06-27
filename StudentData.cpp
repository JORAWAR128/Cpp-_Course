#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    string School;
    string Department;
    string Branch;

public:
    Student(string s, string d, string b)
    {
        School = s;
        Department = d;
        Branch = b;
    }
    void StudyDetails()
    {
        cout << "Branch : " << Branch << endl;
        cout << "Department : " << Department << endl;
        cout << "School Name : " << School << endl;
    }
    virtual void display() = 0;
};
class StudentData : public Student
{
private:
    string Name;
    int Rollno;
    char Section;
    string Contact;
    int AdmsnNo;
    string Address;

public:
    StudentData(string s, string d, string b, string n, int r, char sec, string c, int a, string A) : Student(s, d, b)
    {
        Name = n;
        Rollno = r;
        Section = sec;
        Contact = c;
        AdmsnNo = a;
        Address = A;
    }
    void display()
    {
        cout << "----------------\n  STUDENT DATA   \n----------------" << endl;
        cout << "Name : " << Name << endl;
        cout << "Rollno : " << Rollno << endl;
        cout << "Section : " << Section << endl;
        cout << "AdmissionNo. : " << AdmsnNo << endl;
        cout << "Contact : " << Contact << endl;
        cout << "Address : " << Address << endl;
        StudyDetails();
    }
};
class AcademicRecords : public Student
{
    string Name;
    float mat, phy, che, Total, Percent;
    char Grade;

public:
    AcademicRecords(string s, string d, string b, string n, float m, float p, float c) : Student(s, d, b)
    {
        Name = n;
        mat = m;
        phy = p;
        che = c;
        Total = mat + phy + che;
        Percent = (Total * 100) / 300;
        if (Percent < 40)
        {
            Grade = 'F';
        }
        else if (Percent <= 50)
        {
            Grade = 'D';
        }
        else if (Percent <= 60)
        {
            Grade = 'C';
        }
        else if (Percent <= 70)
        {
            Grade = 'B';
        }
        else if (Percent <= 90)
        {
            Grade = 'A';
        }
        else
        {
            Grade = 'O';
        }
    }
    void display()
    {
        cout << "-------------------\n ACADEMIC RECORDS \n-------------------" << endl;
        cout << "Name : " << Name << endl;
        cout << "Maths : " << mat << endl;
        cout << "Physics : " << phy << endl;
        cout << "Chemistry : " << che << endl;
        cout << "Total score : " << Total << "/300" << endl;
        cout << "Percentage : " << Percent << "%" << endl;
        cout << "Grade : " << Grade << endl;
        StudyDetails();
    }
};
int main()
{
    Student *S1[2];
    StudentData S("ALOK IIT ACADEMY", "PCM", "CO-SPARK", "HARMANTH", 24, 'A', "9442567635", 2024733, " 13-5-65 ,Sarojini nagar, New delhi-001");
    AcademicRecords Stu("ALOK IIT ACADEMY", "PCM", "CO-SPARK", "HARMANTH", 97, 96.5, 94.5);
    S1[0] = &S;
    S1[1] = &Stu;
    int n;
    cout << "WELCOME TO THE STUDENT PORTFOLIO . " << endl;
    cout << "For Student Data , click 1 \nFor Student's Academic Records , click 2" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        S1[0]->display();
        break;
    case 2:
        S1[1]->display();
        break;
    default:
        cout << "Invalid Verification ! You Entered something else other than 1 or 2" << endl;
    }

    return 0;
}
