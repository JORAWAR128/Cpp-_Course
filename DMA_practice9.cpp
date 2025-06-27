#include <iostream>
using namespace std;
//  void swap( int * m1[] ,int m , int n){
//      int * temp[m][n] =  m1[m][n] ;
//      m1[m][n] = m1[n][m];
//      m1[n][m] = temp[m][n];
//  }
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
    
    cout<<"\n\n\n\n";
    cout<<"TRANSPOSE MATRIX IS : "<<endl;
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            swap(matrix[i][j] , matrix[j][i]);
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
    for(i = 0 ; i < n ; i++){
        delete matrix[i];
    }
    delete [] matrix;
    return 0;
}

