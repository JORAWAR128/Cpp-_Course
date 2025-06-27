#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
//         string s;
//         ofstream write("sentence.txt");
//         cout<<"Enter a string to write into a file. "<<endl;
//         getline(cin>>ws , s);
//         write<<s;
//         write.close();
  string str;
  ifstream read("sentence.txt");
  while(getline(read , str)){
  cout<<str<<endl;
  }
  return 0;
}