#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    map<string, char> names;
    names["Jorawar Singh "] = 'S';
    names["kuldeep Sharma"] = 'M';
    names["Bhanvarlal"] = 'C';
    names.insert({{"Ramesh", 'D'}, {"Hemanth", 'G'}});
    cout << "Names       Intials" << endl;
    cout << "Size of the array is :" << names.size() << endl;
    cout << "maximum element pairs can be stored in this array is : " << names.max_size() << endl;
    map<string, char>::iterator itr = names.begin();
    for (itr; itr != names.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }
    names.clear();
    names["Bhanvarlal Ghanchi"] = 'K';

    map<string, char>::iterator itr2 = names.begin();
    for (itr2; itr2 != names.end(); itr2++)
    {
        cout << (*itr2).first << " " << (*itr2).second << endl;
    }
    return 0;
}
