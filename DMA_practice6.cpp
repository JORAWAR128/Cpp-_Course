#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter number of elements in the array : " << endl;
    cin >> n;
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " : " << endl;
        cin >> *(array + i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << *(array + i) << "\t";
    }
    int New;
    cout << "\nenter new size of array with same values , but extra with zeroes . " << endl;
    cin >> New;
    int *newarray = new int[New];
    for (int i = 0; i < New; i++)
    {
        *(newarray + i) = *(array + i);
    }
    for (int i = n; i < New; i++)
    {
        *(newarray + i) = 0;
    }
    delete[] array;
    for (int i = 0; i < New; i++)
    {
        cout << *(newarray + i) << "\t";
    }
    delete[] newarray;
    return 0;
}
