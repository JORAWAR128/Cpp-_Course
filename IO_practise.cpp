#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream write ; 
    write.open("students.txt");
    write<<"STUDENT NAME \tROLL NO \tMARKS"<<endl;
    int n;
    cout<<"Enter number of students "<<endl;
    cin>>n;
    int r;
    string s;
    float m;
    for(int i = 0 ; i <n ; i++){
        cout<<"Enter details of student "<<i+1<<endl;
        cout<<"Roll number "<<endl;
        cin>>r;
        cout<<"Name"<<endl;
        getline(cin>>ws , s );
        cout<<"Marks"<<endl;
        cin>>m;
         write<<s<<"\t\t\t"<<r<<"\t\t\t"<<m<<"\n"<<endl;
    }
     write.close();
     ifstream read;
     string str;
     read.open("students.txt");
     while(read.eof() == 0){
        getline(read , str);
        cout<<str<<"\n";
     }
     read.close();
    return 0;
}
