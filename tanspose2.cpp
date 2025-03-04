#include <iostream>

int main() {
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int transpose[3][3];

    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            *(*(transpose + j) + i) = *(*(a + i) + j); 
        }
    }

    
    std::cout << "Transpose of Matrix a:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << *(*(transpose + i) + j) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
