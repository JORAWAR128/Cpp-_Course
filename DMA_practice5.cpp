#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int n, m;
    cout << "We are going to create a matrix . " << endl;
    cout << "Enter number of Rows : " << endl;
    cin >> n;
    cout << "Enter number of Columns : " << endl;
    cin >> m;
    int **matrix = new int *[n];
    for (i = 0; i < n; i++)
    {
        matrix[i] = new int[m];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << "Enter Element [ " << i + 1 << " ] [ " << j + 1 << " ] " << endl;
            cin >> (matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << matrix[i][j];
            cout << "\t";
        }
        cout << "\n";
    }

    delete[] matrix;
    return 0;
}
