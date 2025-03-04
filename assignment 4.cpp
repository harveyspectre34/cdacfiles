#include <iostream>
#include <limits> // For INT_MIN

int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Example array

    int maxElement = std::numeric_limits<int>::min(); // Initialize with the smallest possible integer
    int maxRow = -1;
    int maxCol = -1;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (a[i][j] > maxElement) {
                maxElement = a[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    if (maxRow != -1) {
        std::cout << "Maximum element: " << maxElement << std::endl;
        std::cout << "Row index: " << maxRow << std::endl;
        std::cout << "Column index: " << maxCol << std::endl;
    } else {
        std::cout << "Array is empty or invalid." << std::endl;
    }

    //Example 2: a[3][3]={{1,2},{4,5},{7,8,9}};
    int a2[3][3] = {{1,2,0},{4,5,0},{7,8,9}}; //padding with 0 to make it a valid 3x3 array.
    maxElement = std::numeric_limits<int>::min();
    maxRow = -1;
    maxCol = -1;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (a2[i][j] > maxElement) {
                maxElement = a2[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    if (maxRow != -1) {
        std::cout << "Maximum element(a2): " << maxElement << std::endl;
        std::cout << "Row index: " << maxRow << std::endl;
        std::cout << "Column index: " << maxCol << std::endl;
    } else {
        std::cout << "Array is empty or invalid." << std::endl;
    }

    //Example 3: int a[3][3]={1,2,4,5,7,8,9};
    int a3[3][3] = {1, 2, 4, 5, 7, 8, 9};
    maxElement = std::numeric_limits<int>::min();
    maxRow = -1;
    maxCol = -1;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (a3[i][j] > maxElement) {
                maxElement = a3[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    if (maxRow != -1) {
        std::cout << "Maximum element(a3): " << maxElement << std::endl;
        std::cout << "Row index: " << maxRow << std::endl;
        std::cout << "Column index: " << maxCol << std::endl;
    } else {
        std::cout << "Array is empty or invalid." << std::endl;
    }

    return 0;
}
