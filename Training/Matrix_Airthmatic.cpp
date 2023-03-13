#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> createMatrix(int row, int column){
    vector<vector<int>> matrix(row, vector<int>(column));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << "Enter the Matrix Data for " << i << "th Row and " << j << "th Column" << endl;
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

// Working Method

void addMatrix(int row, int column, vector<vector<int>> matrix,vector<vector<int>> matrix2){

    vector<vector<int>> result(row, vector<int>(column));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            result[i][j] = matrix[i][j] + matrix2[i][j];
            cout << "Value at "  <<i << "and " << j << " : " << result[i][j];
        }
    }

    cout << "Addition of Matrix" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

}

// Working Method


void SubMatrix(int row, int column, vector<vector<int>> matrix,vector<vector<int>> matrix2){

    vector<vector<int>> result(row, vector<int>(column));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            result[i][j] = matrix[i][j] - matrix2[i][j];
            cout << "Value at "  <<i << "and " << j << " : " << result[i][j];
        }
    }

    cout << "Subtration of Matrix" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

}

// Not Working Method

void Multi_Matrix(int row, int column, vector<vector<int>> matrix,vector<vector<int>> matrix2){

    vector<vector<int>> result(row, vector<int>(column));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            result[i][j] = (matrix[i][j]+matrix2[i][j]) + (matrix[i][j+1] + matrix2[j+1][i]);
        }
    }

    cout << "Subtration of Matrix" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){

    int row, column;
    cout << "enter Row, Column" << endl;
    cin >> row >> column;

   addMatrix(row, column, createMatrix(row, column), createMatrix(row, column));
   SubMatrix(row, column, createMatrix(row, column), createMatrix(row, column));
    Multi_Matrix(row, column, createMatrix(row, column), createMatrix(row, column));




    return 0;
}