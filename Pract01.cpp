<<<<<<< HEAD
#include<iostream>
#include<conio.h>

#define MAX 10

void acceptMatrix(int mat[MAX][MAX], int row, int col) {
    cout<< "Enter elements of the matrix (" << row << "x" << col << "):\n";
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout<< "Element [" << i+1 << "][" << j+1 << "] : ";
            cin>> mat[i][j];
        }
    }
}

void displayMatrix(int mat[MAX][MAX], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

void addMatrix(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiplyMatrix(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row1, int col1, int row2, int col2) {
    for(int i=0; i<row1; i++) {
        for(int j=0; j<col2; j++) {
            result[i][j] = 0;
            for(int k=0; k<col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void transposeMatrix(int mat[MAX][MAX], int trans[MAX][MAX], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}

int main() {
    
    int mat1[MAX][MAX], mat2[MAX][MAX], sum[MAX][MAX], product[MAX][MAX], trans1[MAX][MAX], trans2[MAX][MAX];
    int row1, col1, row2, col2;
    
    cout << "Enter rows and columns for Matrix 1: ";
    cin >> row1 >> col1;
    acceptMatrix(mat1, row1, col1);

    cout << "Enter rows and columns for Matrix 2: ";
    cin >> row2 >> col2;
    acceptMatrix(mat2, row2, col2);

    cout << "\nMatrix 1:\n";
    displayMatrix(mat1, row1, col1);
    
    cout << "\nMatrix 2:\n";
    displayMatrix(mat2, row2, col2);

    if(row1 == row2 && col1 == col2) {
        addMatrix(mat1, mat2, sum, row1, col1);
        cout << "\nAddition of matrices:\n";
        displayMatrix(sum, row1, col1);
    } else {
        cout << "\nAddition not possible. Matrices must be of same dimensions.\n";
    }

    if(col1 == row2) {
        multiplyMatrix(mat1, mat2, product, row1, col1, row2, col2);
        cout << "\nMultiplication of matrices:\n";
        displayMatrix(product, row1, col2);
    } else {
        cout << "\nMultiplication not possible. Columns of Matrix 1 must match rows of Matrix 2.\n";
    }

    transposeMatrix(mat1, trans1, row1, col1);
    transposeMatrix(mat2, trans2, row2, col2);

    cout << "\nTranspose of Matrix 1:\n";
    displayMatrix(trans1, col1, row1);

    cout << "\nTranspose of Matrix 2:\n";
    displayMatrix(trans2, col2, row2);

    return 0;
}
=======
#include<iostream>
#include<conio.h>

#define MAX 10

void acceptMatrix(int mat[MAX][MAX], int row, int col) {
    cout<< "Enter elements of the matrix (" << row << "x" << col << "):\n";
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout<< "Element [" << i+1 << "][" << j+1 << "] : ";
            cin>> mat[i][j];
        }
    }
}

void displayMatrix(int mat[MAX][MAX], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

void addMatrix(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiplyMatrix(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row1, int col1, int row2, int col2) {
    for(int i=0; i<row1; i++) {
        for(int j=0; j<col2; j++) {
            result[i][j] = 0;
            for(int k=0; k<col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void transposeMatrix(int mat[MAX][MAX], int trans[MAX][MAX], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}

int main() {
    
    int mat1[MAX][MAX], mat2[MAX][MAX], sum[MAX][MAX], product[MAX][MAX], trans1[MAX][MAX], trans2[MAX][MAX];
    int row1, col1, row2, col2;
    
    cout << "Enter rows and columns for Matrix 1: ";
    cin >> row1 >> col1;
    acceptMatrix(mat1, row1, col1);

    cout << "Enter rows and columns for Matrix 2: ";
    cin >> row2 >> col2;
    acceptMatrix(mat2, row2, col2);

    cout << "\nMatrix 1:\n";
    displayMatrix(mat1, row1, col1);
    
    cout << "\nMatrix 2:\n";
    displayMatrix(mat2, row2, col2);

    if(row1 == row2 && col1 == col2) {
        addMatrix(mat1, mat2, sum, row1, col1);
        cout << "\nAddition of matrices:\n";
        displayMatrix(sum, row1, col1);
    } else {
        cout << "\nAddition not possible. Matrices must be of same dimensions.\n";
    }

    if(col1 == row2) {
        multiplyMatrix(mat1, mat2, product, row1, col1, row2, col2);
        cout << "\nMultiplication of matrices:\n";
        displayMatrix(product, row1, col2);
    } else {
        cout << "\nMultiplication not possible. Columns of Matrix 1 must match rows of Matrix 2.\n";
    }

    transposeMatrix(mat1, trans1, row1, col1);
    transposeMatrix(mat2, trans2, row2, col2);

    cout << "\nTranspose of Matrix 1:\n";
    displayMatrix(trans1, col1, row1);

    cout << "\nTranspose of Matrix 2:\n";
    displayMatrix(trans2, col2, row2);

    return 0;
}
>>>>>>> 30ab57f1d87d31de7f0a4a46f7cc4ca245e86d27
