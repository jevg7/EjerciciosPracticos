#include <iostream>
#include <vector>

using namespace std;

// Function to perform matrix multiplication
vector<vector<int>> matrixMultiplication(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2) {
    int rows1 = matrix1.size();
    int cols1 = matrix1[0].size();
    int cols2 = matrix2[0].size();

    vector<vector<int>> result(rows1, vector<int>(cols2, 0));

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return result;
}

int main() {
    int rows1, cols1, rows2, cols2;

    // Get dimensions of the matrices
    cout << "Enter the number of rows and columns for matrix 1: ";
    cin >> rows1 >> cols1;

    cout << "Enter the number of rows and columns for matrix 2: ";
    cin >> rows2 >> cols2;

    // Check if dimensions are compatible for multiplication
    if (cols1 != rows2) {
        cout << "Error: The number of columns in matrix 1 must be equal to the number of rows in matrix 2." << endl;
        return 0;
    }

    // Create matrices
    vector<vector<int>> matrix1(rows1, vector<int>(cols1));
    vector<vector<int>> matrix2(rows2, vector<int>(cols2));

    // Get elements of matrix 1
    cout << "Enter the elements of matrix 1:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Get elements of matrix 2
    cout << "Enter the elements of matrix 2:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Perform matrix multiplication
    vector<vector<int>> result = matrixMultiplication(matrix1, matrix2);

    // Display the resulting matrix
    cout << "Resulting matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}