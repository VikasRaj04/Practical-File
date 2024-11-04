#include <stdio.h>

#define MAX 100 // Define the maximum size for matrix

void inputMatrix(int matrix[MAX][MAX], int row, int col) {
    printf("Enter elements of matrix (%d x %d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int row, int col) {
    printf("Matrix (%d x %d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[MAX][MAX], transposed[MAX][MAX];
    int row, col;

    // Input the dimensions of the matrix
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    // Input the matrix
    inputMatrix(matrix, row, col);

    // Print the original matrix
    printf("\nOriginal Matrix:\n");
    printMatrix(matrix, row, col);

    // Transpose the matrix
    transposeMatrix(matrix, transposed, row, col);

    // Print the transposed matrix
    printf("\nTransposed Matrix:\n");
    printMatrix(transposed, col, row);

    return 0;
}
