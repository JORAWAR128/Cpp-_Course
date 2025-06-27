#include <iostream>
#include <list>
using namespace std;
template <class T>
void displaylist(list<T> &li)
{
    typename list<T>::iterator it = li.begin();
    for (it; it != li.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
template <class t>
void createlist(list<t> &lists)
{
    typename list<t>::iterator iter = lists.begin();
    for (int i = 0; i < lists.size(); i++)
    {
        cout << "Give value for list element" << endl;
        cin >> *iter;
        iter++;
    }
}
int main()
{
    list<int> list1;
    list1.push_back(42);
    list1.push_back(56);
    list1.push_back(29);
    list1.push_back(72);
    list1.push_back(84);
    list1.push_back(10);
    displaylist(list1);
    list1.pop_back();
    cout << "After popping the list1 is : " << endl;
    displaylist(list1);
    list<int> list2(4);
    createlist(list2);
    cout << "List two is " << endl;
    displaylist(list2);
    list1.sort();
    cout << "After sorting list1 is : " << endl;
    displaylist(list1);
    list2.sort();
    cout << "After sorting list2 is : " << endl;
    displaylist(list2);
    list1.merge(list2);
    cout << "After Merging list 1 and 2 is : " << endl;
    displaylist(list1);
    list1.reverse();
    cout << "Reversed sorted list is " << endl;
    displaylist(list1);
    return 0;
}
