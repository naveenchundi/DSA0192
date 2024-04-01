#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows for the matrix: ";
    cin >> rows;

    cout << "Enter the number of columns for the matrix: ";
    cin >> cols;

    // Declare the matrix
    int matrix[rows][cols];

    // Input elements for the matrix
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Calculate the sum of the main diagonal
    int mainDiagonalSum = 0;
    for (int i = 0; i < min(rows, cols); ++i) {
        mainDiagonalSum += matrix[i][i];
    }

    // Calculate the sum of the secondary diagonal
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < min(rows, cols); ++i) {
        secondaryDiagonalSum += matrix[i][cols - i - 1];
    }

    // Display the sums of diagonals
    cout << "Sum of the main diagonal: " << mainDiagonalSum << endl;
    cout << "Sum of the secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}

