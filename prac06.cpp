<<<<<<< HEAD
// C++ program to print Lower
// triangular and Upper triangular
// matrix of an array
#include<iostream>
 
using namespace std;
 
// Function to form
// lower triangular matrix
void lower(int matrix[3][3], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i < j)
            {
                cout << "0" << " ";
            }
            else
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
 
// Function to form upper triangular matrix
void upper(int matrix[3][3], int row, int col)
{
    int i, j;
     
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i > j)
            {
                cout << "0" << " ";
            }
            else
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
 
// Driver Code
int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int row = 3, col = 3;
     
    cout << "Lower triangular matrix: \n";
    lower(matrix, row, col);
     
    cout << "Upper triangular matrix: \n";
    upper(matrix, row, col);
         
    return 0;
}
=======
// C++ program to print Lower
// triangular and Upper triangular
// matrix of an array
#include<iostream>
 
using namespace std;
 
// Function to form
// lower triangular matrix
void lower(int matrix[3][3], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i < j)
            {
                cout << "0" << " ";
            }
            else
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
 
// Function to form upper triangular matrix
void upper(int matrix[3][3], int row, int col)
{
    int i, j;
     
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i > j)
            {
                cout << "0" << " ";
            }
            else
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
 
// Driver Code
int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int row = 3, col = 3;
     
    cout << "Lower triangular matrix: \n";
    lower(matrix, row, col);
     
    cout << "Upper triangular matrix: \n";
    upper(matrix, row, col);
         
    return 0;
}
>>>>>>> 30ab57f1d87d31de7f0a4a46f7cc4ca245e86d27
