#include <iostream>

void transposeMatrix(int matrix[3], int rows, int cols) {
    int transposed[cols][rows]; // Notice the switched dimensions

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }

    // Display the transposed matrix
    std::cout << "Transposed Matrix:\n";
    for (int i = 0; i < cols; ++i) { // Note the swapped loop limits
        for (int j = 0; j < rows; ++j) {
            std::cout << transposed[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    transposeMatrix(matrix, 3, 3); // Example with a 3x3 matrix

    //Example with a 2x3 matrix
    int matrix2[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    transposeMatrix(matrix2, 2, 3);
    return 0;
}
