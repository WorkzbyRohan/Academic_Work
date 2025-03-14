#include <iostream>
using namespace std;

// Merge two 2D arrays into a third array
void merge(char matrix1[][100], char matrix2[][100], char array3[][100], int size1, int size2) {
    // Copy all lines from matrix1 to array3
    for (int i = 0; i < size1; i++) {
        for (int j = 0; matrix1[i][j] != '\0'; j++) {
            array3[i][j] = matrix1[i][j];
        }
    }

    // Copy all lines from matrix2 to array3 after matrix1
    for (int i = 0; i < size2; i++) {
        for (int j = 0; matrix2[i][j] != '\0'; j++) {
            array3[size1 + i][j] = matrix2[i][j];
        }
    }
}

// Helper function to print a 2D array
void print2DArray(char array[][100], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }
}

int main() {
    char mat1[][100] = {
        "This is first line with no space at start and no space at end",
        "This is second line with no space at start and no space at end",
        "Third line with no space at start and no space at end"
    };

    char mat2[][100] = {
        "Random text for mat2",
        "Second line of random text for mat2",
        "Third line of random text for mat2"
    };

    int mat1_size = sizeof(mat1) / sizeof(mat1[0]);
    int mat2_size = sizeof(mat2) / sizeof(mat2[0]);
    int m3_size = mat1_size + mat2_size;

    char mat3[m3_size][100];

    merge(mat1, mat2, mat3, mat1_size, mat2_size);

    cout << "Merged Array:" << endl;
    print2DArray(mat3, m3_size);

    return 0;
}
