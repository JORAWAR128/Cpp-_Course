#include <iostream>
#include <string.h>
using namespace std;
// Example of a Multilevel Inheritance
class Class
{
protected:
    int standard;
    string subjects[5];

public:
    void setstandard()
    {
        cout << "Which standard you are studying " << endl;
        cin >> standard;
    }
    void setsubjects()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter name of subject " << i + 1 << endl;
            cin.ignore();
            getline(cin,subjects[i]);
    } }
    void getsubjects(){
    
        cout << "You are from class " << standard << endl;
        cout << "your subjects are : " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << subjects[i]<<endl;
        }
    }
};
class batch : protected Class
{
protected:
    int batch;

public:
    void cnfmbatch()
    {
        cout << "You are from which batch of class " << standard << " ??" << endl;
        cin >> batch;
        if (batch == 1)
        {
            cout << "Okay" << endl;
        }
        else if (batch == 2)
        {
            cout << "Okay" << endl;
        }
        else
        {
            cout << "Enter appropriate batch !!!!! (either 1 or 2 )" << endl;
        }
    }
    void getbatch()
    {
        if (batch == 1)
        {
            cout << "You are a student of Batch 1 in class" << standard << endl;
            cout << "your additional Subjects are :" << endl;
            cout << "Coding laboratory\nFull Stack Web Development\nAI tools" << endl;
        }
        else if (batch == 2)
        {
            cout << "You are a student of Batch 2 in class" << standard << endl;
            cout << "your additional Subjects are :" << endl;
            cout << "Coding laboratory\nData Science\nOOPS in C++" << endl;
        }
        else
        {
            cout << "no appropriate batch !! Error!!" << endl;
        }
    }
};
class student : protected batch
{
private:
    string name;
    int ROllno;

public:
    void setnameandrollno()
    {
        cout << "Enter your name " << endl;
        cin >> name;
        cout << "Enter your ROllno " << endl;
        cin >> ROllno;
    }
    void getnameandrollno()
    {
        cout << "Your Name is " << name << endl;
        cout << "your Rollno is " << ROllno << endl;
    }
    void display()
    {
        cout<<"Taking information of Student regarding Class and providing The extra Subjects Acoording to batch"<<endl;
        setstandard();
        setsubjects();
        cnfmbatch();
        setnameandrollno();
        getnameandrollno();
        getsubjects();
        getbatch();
    

        cout << "Well done!! we got all your required details regarding your class and subjects and the extra subjects were Given to you as per your Batch" << endl;
        cout << "Thnak you !!!!!!!!!" << endl;
    }
};
int main()
{
    student child;
    child.display();

    return 0;
}
