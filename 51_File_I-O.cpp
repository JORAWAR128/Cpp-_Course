#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
  string s = "JORSA RAJPUROHIT SANKARNA ";
  ofstream write("textfile.txt");
  write << s;
  write.close();
  string str;
  ifstream read("textfile.txt");
  getline(read, str);
  cout << str;
  read.close();
  //    read>>str;
  //    cout<<str;
  //    read.close();
  return 0;
}
